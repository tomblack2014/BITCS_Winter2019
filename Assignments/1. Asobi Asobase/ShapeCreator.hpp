#pragma once

#include "Shape.hpp"

// Player1 请根据 TODO 提示补全此类
// 完成结果不得与示例相同
// 示例：
// 输入：无
// 输出：shape 调用 Print 结果为：
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

namespace AsobiAsobase
{

    class ShapeCreator
    {
    public:

        /// 构造函数
        ShapeCreator(int mode = 0, char base = '*');

        /// Shape Getter
        Shape Get();

    private:

        Shape shape;
    };

}
