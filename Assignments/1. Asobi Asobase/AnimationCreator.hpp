#pragma once

#include "Shape.hpp"
#include "BGCreator.hpp"
#include "ShapeCreator.hpp"
#include <Windows.h>

namespace AsobiAsobase
{
    // Player1 请根据 TODO 提示补全此类
    // 完成结果不得与示例相同
    // 示例：
    // 输入：s 调用 Print 结果为：
    //
    //            *
    //           ***
    //          *****
    //         *******
    //          *****
    //           ***
    //            *
    //
    //
    // 输出：s 平移后的结果，水平竖直斜向都可，本例中菱形向左移动了一格
    //
    //           *
    //          ***
    //         *****
    //        *******
    //         *****
    //          ***
    //           *
    //
    //

    class AnimationCreator
    {
    public:

        /// 构造函数
        AnimationCreator(ShapeCreator shapeCreator, BGCreator bgCreator);

        /// 开始执行动画效果
        void Run();

    private:

        // TODO：让图形移动一格（沿 x，y 或者斜方向均可）
        Shape MoveShape(Shape s);

    private:
        BGCreator bgCreator;
        ShapeCreator shapeCreator;
    };

}
