#include "BGCreator.hpp"

namespace AsobiAsobase
{
    //TODO: ������� Shape ����'#'��ȫ����
    //ѡ�������� base ʵ�ֲ�ͬ�Ļ��׷���

    Shape BGCreator::Get(Shape s, char base)
    {
        for (int i = 0; i < Shape::Height; i++)
            for (int j = 0; j < Shape::Width; j++)
                if (s.Get(j, i) == 0)
                    s.Set(j, i, base);

        return s;
    }
}
