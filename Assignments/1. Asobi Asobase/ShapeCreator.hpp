#pragma once

#include "Shape.hpp"

// Player1 ����� TODO ��ʾ��ȫ����
// ��ɽ��������ʾ����ͬ
// ʾ����
// ���룺��
// �����shape ���� Print ���Ϊ��
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

        /// ���캯��
        ShapeCreator(int mode = 0, char base = '*');

        /// Shape Getter
        Shape Get();

    private:

        Shape shape;
    };

}
