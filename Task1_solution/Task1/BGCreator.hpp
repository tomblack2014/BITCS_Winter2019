#pragma once
#include "Shape.hpp"

//Player2�����TODO��ʾ��ȫ����
//��ɽ��������ʾ����ͬ
//ʾ����
//���룺s����Print���Ϊ��
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
//�����m_shape����Print���Ϊ��
//##############################
//############*#################
//###########***################
//##########*****###############
//#########*******##############
//##########*****###############
//###########***################
//############*#################
//##############################
//##############################

class BGCreator
{
public:
	//TODO:�������Shape����'#'��ȫ����
	//ѡ��������baseʵ�ֲ�ͬ�Ļ��׷���
	Shape Get(Shape s, char base = '#') {
		for (int i = 0; i < ShapeHeight; i++) {
			for (int j = 0; j < ShapeWidth; j++) {
				if (s.Get(j, i) == 0) {
					s.Set(j, i, base);
				}
			}
		}

		return s;
	};
};