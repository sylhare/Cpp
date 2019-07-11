#include <iostream>
#include <cstdlib>
//https://codereview.stackexchange.com/questions/47167/conways-game-of-life-in-c

const int gridsize = 75; //Making this a global constant to avoid array issues.

void Display(bool grid[gridsize+1][gridsize+1]){
    for(int a = 1; a < gridsize; a++){
        for(int b = 1; b < gridsize; b++){
            if(grid[a][b] == true){
                std::cout << " *";
            }
            else{
                std::cout << "  ";
            }
            if(b == gridsize-1){
                std::cout << std::endl;
            }
        }
    }
}
//This copy's the grid for comparision purposes.
void CopyGrid (bool grid[gridsize+1][gridsize+1],bool grid2[gridsize+1][gridsize+1]){
    for(int a =0; a < gridsize; a++){
        for(int b = 0; b < gridsize; b++){grid2[a][b] = grid[a][b];}
    }
}
//Calculates Life or Death
void liveOrDie(bool grid[gridsize+1][gridsize+1]){
    bool grid2[gridsize+1][gridsize+1] = {};
    CopyGrid(grid, grid2);
    for(int a = 1; a < gridsize; a++){
        for(int b = 1; b < gridsize; b++){
            int life = 0;
        for(int c = -1; c < 2; c++){
            for(int d = -1; d < 2; d++){
                if(!(c == 0 && d == 0)){
                    if(grid2[a+c][b+d]) {++life;}
                }
            }
        }
            if(life < 2) {grid[a][b] = false;}
            else if(life == 3){grid[a][b] = true;}
            else if(life > 3){grid[a][b] = false;}
        }
    }
}

int main(){

    //const int gridsize = 50;
    bool grid[gridsize+1][gridsize+1] = {};

    //Still have to manually enter the starting cells.
    grid[gridsize/2][gridsize/2] = true;
    grid[gridsize/2-1][gridsize/2] = true;
    grid[gridsize/2][gridsize/2+1] = true;
    grid[gridsize/2][gridsize/2-1] = true;
    grid[gridsize/2+1][gridsize/2+1] = true;

    while (true){
        //The following copies our grid.

        Display(grid);     //This is our display.
        liveOrDie(grid); //calculate if it lives or dies.
        system("CLS");
    }
}

/*

update(G(t),G(t-1)){
 for(x: 1..size)
  for(y: 1..size){
    G(t-1)[x+y*size] = rule(neighbors(G(t),x,y),G(t)[x+y*size],x,y)
  }
 swap = G(t-1)
 G(t-1) = G(t)
 G(t) = swap
}

*/