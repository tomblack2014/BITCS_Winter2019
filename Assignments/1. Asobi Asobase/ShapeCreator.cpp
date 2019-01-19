#include <cmath>
#include "ShapeCreator.hpp"

namespace AsobiAsobase
{

    // TODO:在类构造时利用 * 组成一个图形实现 shape 的初始化
    // 选做：利用 mode 与 base 实现不同的图形以及基底符号

    ShapeCreator::ShapeCreator(int mode, char base)
    {
        const int cX = 12, cY = 4;

        //曼哈顿距离小于四的都打'*'
        for (int i = 0; i < Shape::Height; i++) {
            for (int j = 0; j < Shape::Width; j++) {
                if (std::abs(j - cX) + std::abs(i - cY) < 4) {
                    shape.Set(j, i, '*');
                }
            }
        }
    }

    Shape ShapeCreator::Get()
    {
        return shape;
    }
}
