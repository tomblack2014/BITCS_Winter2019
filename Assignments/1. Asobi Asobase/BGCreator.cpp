#include "BGCreator.hpp"

namespace AsobiAsobase
{
    //TODO: 将输入的 Shape 利用'#'补全背景
    //选做：利用 base 实现不同的基底符号

    Shape BGCreator::Get(Shape s, char base)
    {
        for (int i = 0; i < Shape::Height; i++)
            for (int j = 0; j < Shape::Width; j++)
                if (s.Get(j, i) == 0)
                    s.Set(j, i, base);

        return s;
    }
}
