#pragma once

#include "Shape.hpp"

//Player1请根据TODO提示补全此类
//完成结果不得与示例相同
//示例：
//输入：无
//输出：m_shape调用Print结果为：
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
	//TODO:在类构造时利用*组成一个图形实现m_shape的初始化
	//选做：利用mode与base实现不同的图形以及基底符号
	ShapeCreator(int mode = 0, char base = '*') {
		const int cX = 12, cY = 4;
		//曼哈顿距离小于四的都打'*'
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