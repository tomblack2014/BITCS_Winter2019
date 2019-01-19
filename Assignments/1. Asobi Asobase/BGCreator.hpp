#pragma once

#include "Shape.hpp"

// Player2 请根据 TODO 提示补全此类
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
// 输出：m_shape 调用 Print 结果为：
// ##############################
// ############*#################
// ###########***################
// ##########*****###############
// #########*******##############
// ##########*****###############
// ###########***################
// ############*#################
// ##############################
// ##############################

namespace AsobiAsobase
{

    class BGCreator
    {
    public:
        Shape Get(Shape s, char base = '#');
    };
}
