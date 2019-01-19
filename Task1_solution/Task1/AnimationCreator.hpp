#pragma once
#include "Shape.hpp"
#include "BGCreator.hpp"
#include "ShapeCreator.hpp"
#include <Windows.h>

//Player1请根据TODO提示补全此类
//完成结果不得与示例相同
//示例：
//输入：s调用Print结果为：
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
//输出：s平移后的结果，水平竖直斜向都可，本例中菱形向左移动了一格
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
			//让图形移动一格
			s = MoveShape(s);

			//给图形加上背景
			Shape s_bg = m_bgCreator.Get(s);

			//输出
			s_bg.Print();

			Sleep(100);
		}
	}

private:
	//TODO：让图形移动一格（沿x，y或者斜方向均可）
	Shape MoveShape(Shape s) {
		char buf[ShapeHeight];

		//最左边一列存入缓存
		for (int i = 0; i < ShapeHeight; i++) {
			buf[i] = s.Get(0, i);
		}

		//第二列开始每一列向左移动一格
		for (int i = 0; i < ShapeHeight; i++) {
			for (int j = 1; j < ShapeWidth; j++) {
				s.Set(j - 1, i, s.Get(j, i));
			}
		}

		//缓存放回最右一列
		for (int i = 0; i < ShapeHeight; i++) {
			s.Set(ShapeWidth - 1, i, buf[i]);
		}

		return s;
	};

	BGCreator m_bgCreator;
	ShapeCreator m_shapeCreator;
};