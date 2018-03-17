#include <iostream>


void drawRectangle(int l, int h)
{

    for(int line(0); line < h; line++){

        for(int column(0); column < l; column++){
            std::cout << "*";
        }

        std::cout << '\n';
    }
}

int main()
{
    int width, height;

    std::cout << "This programme will draw a rectangle: \n\n"
                 "Rectangle's width : ";

    std::cin >> width;

    std::cout << "Rectangle's height : ";

    std::cin >> height;

    std::cout << "\n";

    drawRectangle(width, height);

    return 0;
}

