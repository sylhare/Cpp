#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    
    //Set a seed with srand for the rand function
    //The seed is used to generate the random nulber
    //Here the computer time is used as seed
    srand(time(0)); 
    
    for (int x = 1; x <= 10; x++) {
        cout << 1 + (rand() % 6) << endl;
    }
}