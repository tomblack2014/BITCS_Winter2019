#include <cmath>
#include "ShapeCreator.hpp"

namespace AsobiAsobase
{

    // TODO:���๹��ʱ���� * ���һ��ͼ��ʵ�� shape �ĳ�ʼ��
    // ѡ�������� mode �� base ʵ�ֲ�ͬ��ͼ���Լ����׷���

    ShapeCreator::ShapeCreator(int mode, char base)
    {
        const int cX = 12, cY = 4;

        //�����پ���С���ĵĶ���'*'
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
