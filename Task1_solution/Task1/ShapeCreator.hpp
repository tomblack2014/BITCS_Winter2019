#pragma once

#include "Shape.hpp"

//Player1�����TODO��ʾ��ȫ����
//��ɽ��������ʾ����ͬ
//ʾ����
//���룺��
//�����m_shape����Print���Ϊ��
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

class ShapeCreator
{
public:
	//TODO:���๹��ʱ����*���һ��ͼ��ʵ��m_shape�ĳ�ʼ��
	//ѡ��������mode��baseʵ�ֲ�ͬ��ͼ���Լ����׷���
	ShapeCreator(int mode = 0, char base = '*') {
		const int cX = 12, cY = 4;
		//�����پ���С���ĵĶ���'*'
		for (int i = 0; i < ShapeHeight; i++) {
			for (int j = 0; j < ShapeWidth; j++) {
				if (abs(j - cX) + abs(i - cY) < 4) {
					m_shape.Set(j, i, '*');
				}
			}
		}
	};

	Shape Get() {
		return m_shape;
	};

private:
	Shape m_shape;
};