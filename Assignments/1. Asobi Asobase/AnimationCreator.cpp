#include <windows.h>
#include "AnimationCreator.hpp"

namespace AsobiAsobase
{
    AnimationCreator::AnimationCreator(ShapeCreator shapeCreator, BGCreator bgCreator)
        : bgCreator(bgCreator)
        , shapeCreator(shapeCreator)
    {}

    void AnimationCreator::Run()
    {
        Shape s = shapeCreator.Get();
        bool done = false;

        while (!done) {
            // 让图形移动一格
            s = MoveShape(s);

            // 给图形加上背景
            Shape bg = bgCreator.Get(s);

            // 输出
            bg.Print();

            Sleep(100);
        }
    }

    Shape AnimationCreator::MoveShape(Shape s)
    {
        char buf[Shape::Height];

        // 最左边一列存入缓存
        for (int i = 0; i < Shape::Height; i++)
            buf[i] = s.Get(0, i);

        // 第二列开始每一列向左移动一格
        for (int i = 0; i < Shape::Height; i++)
            for (int j = 1; j < Shape::Width; j++)
                s.Set(j - 1, i, s.Get(j, i));

        // 缓存放回最右一列
        for (int i = 0; i < Shape::Height; i++)
            s.Set(Shape::Width - 1, i, buf[i]);

        return s;
    }
}
