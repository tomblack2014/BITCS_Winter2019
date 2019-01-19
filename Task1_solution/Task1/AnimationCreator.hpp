#pragma once
#include "Shape.hpp"
#include "BGCreator.hpp"
#include "ShapeCreator.hpp"
#include <Windows.h>

//Player1�����TODO��ʾ��ȫ����
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
//�����sƽ�ƺ�Ľ����ˮƽ��ֱб�򶼿ɣ����������������ƶ���һ��
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
	AnimationCreator(ShapeCreator shapeCreator, BGCreator bgCreator) {
		m_bgCreator = bgCreator;
		m_shapeCreator = shapeCreator;
	};

	void Run() {
		Shape s = m_shapeCreator.Get();
		bool done = false;

		while (!done) {
			//��ͼ���ƶ�һ��
			s = MoveShape(s);

			//��ͼ�μ��ϱ���
			Shape s_bg = m_bgCreator.Get(s);

			//���
			s_bg.Print();

			Sleep(100);
		}
	}

private:
	//TODO����ͼ���ƶ�һ����x��y����б������ɣ�
	Shape MoveShape(Shape s) {
		char buf[ShapeHeight];

		//�����һ�д��뻺��
		for (int i = 0; i < ShapeHeight; i++) {
			buf[i] = s.Get(0, i);
		}

		//�ڶ��п�ʼÿһ�������ƶ�һ��
		for (int i = 0; i < ShapeHeight; i++) {
			for (int j = 1; j < ShapeWidth; j++) {
				s.Set(j - 1, i, s.Get(j, i));
			}
		}

		//����Ż�����һ��
		for (int i = 0; i < ShapeHeight; i++) {
			s.Set(ShapeWidth - 1, i, buf[i]);
		}

		return s;
	};

	BGCreator m_bgCreator;
	ShapeCreator m_shapeCreator;
};