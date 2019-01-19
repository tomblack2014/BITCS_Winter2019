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
            // ��ͼ���ƶ�һ��
            s = MoveShape(s);

            // ��ͼ�μ��ϱ���
            Shape bg = bgCreator.Get(s);

            // ���
            bg.Print();

            Sleep(100);
        }
    }

    Shape AnimationCreator::MoveShape(Shape s)
    {
        char buf[Shape::Height];

        // �����һ�д��뻺��
        for (int i = 0; i < Shape::Height; i++)
            buf[i] = s.Get(0, i);

        // �ڶ��п�ʼÿһ�������ƶ�һ��
        for (int i = 0; i < Shape::Height; i++)
            for (int j = 1; j < Shape::Width; j++)
                s.Set(j - 1, i, s.Get(j, i));

        // ����Ż�����һ��
        for (int i = 0; i < Shape::Height; i++)
            s.Set(Shape::Width - 1, i, buf[i]);

        return s;
    }
}
