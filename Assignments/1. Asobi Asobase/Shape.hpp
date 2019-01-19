#pragma once

namespace AsobiAsobase
{
    class Shape
    {
    public:
        static const int Width = 40;
        static const int Height = 10;

    public:
        Shape();

        char Get(int x, int y);

        void Set(int x, int y, char val);

        void Print();

    private:

        bool IsIn(int x, int y);

    private:

        char mem[Height][Width];
    };
}
