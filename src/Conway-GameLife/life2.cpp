// Created by Edwin J

/* 
 * Edwin J
 * Conway's Game of Life
 * Unfortunately it's hitting time limit here.
 */

#include <iostream>
#include <vector>
#include <random>

std::vector<std::vector<bool> > new_rand_colony(int x, int y) {
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> distr(1, 10);

    std::vector<std::vector<bool> > colony;
    colony.resize(x, std::vector<bool>(y, 0));

    int cx = (x - x % 4) / 4;
    int cy = (y - y % 4) / 4;
    for(int i = cx; i < x - cx; ++i) {
        for(int j = cy; j < y - cy; ++j) {
            if(distr(eng) > 6) {
                colony[i][j] = true;
            } else {
                colony[i][j] = false;
            }
        }
    }
    return colony;
}

std::vector<std::vector<bool> > progress(std::vector<std::vector<bool> > _colony) {
    std::vector<std::vector<bool> > new_colony;
    new_colony.resize(_colony.size(), std::vector<bool>(_colony[0].size(), 0));

    for(int i = 1; i < _colony.size() - 1; ++i) {
        for(int j = 1; j < _colony[0].size() - 1; ++j) {
            int alive = 0;
            _colony[i-1][j-1] ? alive++ : alive = alive;
            _colony[i][j-1] ? alive++ : alive = alive;
            _colony[i+1][j-1] ? alive++ : alive = alive;

            _colony[i-1][j+1] ? alive++ : alive = alive;
            _colony[i][j+1] ? alive++ : alive = alive;
            _colony[i+1][j+1] ? alive++ : alive = alive;

            _colony[i-1][j] ? alive++ : alive = alive;
            _colony[i+1][j] ? alive++ : alive = alive;

            if(_colony[i][j] && alive < 2) {
                new_colony[i][j] = false;
            } else if(_colony[i][j] && alive > 3) {
                new_colony[i][j] = false;
            } else if(!_colony[i][j] && alive == 2) {
                new_colony[i][j] = true;
            } else {
                new_colony[i][j] = _colony[i][j];
            }
        }
    }

    return new_colony;
}

void print_colony(std::vector<std::vector<bool> > _colony) {
    for(int i = 0; i < _colony.size(); ++i) {
        for(int j = 0; j < _colony[0].size(); ++j) {
            (_colony[i][j]) ? std::cout << "O" : std::cout << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    auto col = new_rand_colony(40, 12);

    int n = 0;
    do {
        auto current = col;
        col = progress(current);
        print_colony(current);
        n++;
    } while(n != 10);

    return 0;
}
