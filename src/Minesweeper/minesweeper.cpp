/*

    Minesweeper challenge solution

*/

#include <vector>
#include <stdlib.h>
#include <iostream>

template<typename T>
class Matrix {
 public:
  void resize(int rows, int cols) {
    data_.resize(rows * cols);
    rows_ = rows;
    cols_ = cols;
  }
    
  T& at(int row, int col) {
    return data_.at(row * cols_ + col);
  }
  int rows() const { return rows_; }
  int cols() const { return cols_; }
 private:
  std::vector<T> data_;
  int rows_ = 0;
  int cols_ = 0;
};

constexpr int kMine = 9;
using std::min;
using std::max;

class MineField {
 private:
  struct Cell {
    int value = 0;
    bool visible = false;
  };
  Matrix<Cell> field;
  
 public:
  MineField(int rows, int cols, int num_mines) {
    field.resize(rows, cols);
    int mines_placed = 0;
    while (mines_placed < num_mines) {
      int row = rand() % rows;
      int col = rand() % cols;
      if (field.at(row, col).value == kMine) { continue; }
      mines_placed++;
      for (int i = max(0, row-1); i <= min(rows-1, row + 1); ++i) {
        for (int j = max(0, col-1); j <= min(cols-1, col + 1); ++j) {
          if (i == row && j == col) { field.at(i, j).value = kMine; }
          else if (field.at(i, j).value != kMine) { 
            field.at(i, j).value++; 
          }
        }
      }
    }
  }

  bool OnClick(int row, int col) {
    if (row < 0 || row >= field.rows() || col < 0 || col >= field.cols()) {
      return false;
    }
    if (field.at(row, col).visible) { return false; }
    field.at(row, col).visible = true;
    if (field.at(row, col).value == kMine) { 
      std::cout << "BOOM!" << std::endl << std::endl;
      return true; 
    }
    if (field.at(row, col).value != 0) { return false; }
    OnClick(row - 1, col);
    OnClick(row + 1, col);
    OnClick(row, col - 1);
    OnClick(row, col + 1);
    return false;
  }

  void Print(bool show_hidden) {
    for (int i = 0; i < field.rows(); ++i) {
      for (int j = 0; j < field.cols(); ++j) {
        if (field.at(i, j).visible || show_hidden) {
          std::cout << field.at(i, j).value << " ";
        } else {
          std::cout << ". ";
        }
      }
      std::cout << std::endl;
    }
    std::cout << std::endl;
  }
};

int main() {
  srand(1);
  MineField mine_field(10, 10, 7);
  mine_field.Print(true);
  mine_field.OnClick(5, 1);
  mine_field.Print(false);
  mine_field.OnClick(2, 6);
  mine_field.Print(false);
  mine_field.OnClick(9, 3);
  mine_field.Print(false);
  mine_field.OnClick(0, 0);
  mine_field.Print(false);
  mine_field.OnClick(3, 5);
  mine_field.Print(false);
  return 0;
}
