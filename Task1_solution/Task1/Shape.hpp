#pragma once

#include <vector>
#include <iostream>

using namespace std;

const int ShapeWidth = 40;
const int ShapeHeight = 10;

class Shape
{
public:
	//Shape固定大小为
	Shape() {
		memset(m_data, 0, sizeof(m_data));
	};

	char Get(int x, int y) {
		if (x >= 0 && x < ShapeWidth && y >= 0 && y < ShapeHeight) {
			return m_data[y][x];
		}
		cout << "Shape：Get(x,y)位置越界" << endl;
		system("pause");
		return 0;
	}

	void Set(int x, int y, char val) {
		if (x >= 0 && x < ShapeWidth && y >= 0 && y < ShapeHeight) {
			m_data[y][x] = val;
		}
		else {
			cout << "Shape：Set(x,y)位置越界" << endl;
			system("pause");
		}
	}

	void Print() {
		system("CLS");
		for (int i = 0; i < ShapeHeight; i++) {
			for (int j = 0; j < ShapeWidth; j++) {
				cout << m_data[i][j];
			}
			cout << endl;
		}
	}

private:
	char	m_data[ShapeHeight][ShapeWidth];
};