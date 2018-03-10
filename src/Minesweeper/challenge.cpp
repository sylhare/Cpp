/*
                                     The Challenge
                                Implement Minesweeper 
                                    
    Minesweeper is a game where the objective is correctly identify the location of all mines
    in a given grid.

    Showing the demo board, 
    9 is the mine and 1, 2 the number around are indicators of the number of mine

                                    0  0  0  0  0
                                    0  0  0  0  0
                                    1  1  1  0  0
                                    1  9  1  0  0
                                    1  2  2  1  0
                                    0  1  9  1  0
                                    0  1  1  1  0

    When clicked on the bottom left zone (the '-' are hidden zones).

                                    0  0  0  0  0
                                    0  0  0  0  0
                                    1  1  1  0  0
                                    -  -  1  0  0
                                    -  -  2  1  0
                                    -  -  -  1  0
                                    -  -  -  1  0
    
    Please write functions to construct the playing field given the size and number of mines.
    Note: You can suppose that you have a Matrix class that looks like this:
    
    Source: https://techdevguide.withgoogle.com/paths/foundational/sequence-2/coding-question-minesweeper/#

*/

template<typename T> 
class Matrix { 
  void resize(int rows, int cols); 
  T& at(int row, int col); 
  int rows(); 
  int cols(); 
}; 