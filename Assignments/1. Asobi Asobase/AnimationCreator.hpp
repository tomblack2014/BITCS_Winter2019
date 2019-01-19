#pragma once

#include "Shape.hpp"
#include "BGCreator.hpp"
#include "ShapeCreator.hpp"
#include <Windows.h>

namespace AsobiAsobase
{
    // Player1 ����� TODO ��ʾ��ȫ����
    // ��ɽ��������ʾ����ͬ
    // ʾ����
    // ���룺s ���� Print ���Ϊ��
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
    // �����s ƽ�ƺ�Ľ����ˮƽ��ֱб�򶼿ɣ����������������ƶ���һ��
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

        /// ���캯��
        AnimationCreator(ShapeCreator shapeCreator, BGCreator bgCreator);

        /// ��ʼִ�ж���Ч��
        void Run();

    private:

        // TODO����ͼ���ƶ�һ���� x��y ����б������ɣ�
        Shape MoveShape(Shape s);

    private:
        BGCreator bgCreator;
        ShapeCreator shapeCreator;
    };

}
