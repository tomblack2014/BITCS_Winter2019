#include <vector>
#include <iostream>

#include "Shape.hpp"

namespace AsobiAsobase
{
    Shape::Shape()
        : mem()
    {}

    char Shape::Get(int x, int y)
    {
        if (IsIn(x, y))
            return mem[y][x];

        std::cerr << "Shape：Get(x,y) 位置越界" << std::endl;
        system("pause");

        return 0;
    }

    void Shape::Set(int x, int y, char val)
    {
        if (IsIn(x, y)) {
            mem[y][x] = val;
        } else {
            std::cerr << "Shape：Set(x,y) 位置越界" << std::endl;
            system("pause");
        }
    }

    void Shape::Print()
    {
        system("cls");

        for (int i = 0; i < Height; i++) {
            for (int j = 0; j < Width; j++)
                std::cerr << mem[i][j];

            std::cerr << std::endl;
        }
    }

    bool Shape::IsIn(int x, int y)
    {
        return 0 <= x && x < Width && 0 <= y && y < Height;
    }
}
