/***************************************************************************
*
*	���Ȼ�ӭ��������㷨�飬ϣ����Ҷ��ܹ��ɹ�һ����ʵ�ĺ��ټ�ѵ
*	������������һ��������ϰ�ɣ�дһЩ����������˳������ѡ���
*	������������������ӵĴ�ͳ�����ȼ�����������һ���������������
*	����ܼ򵥣�ϣ����Ҹ������Ѿ���ƺõ�c++�ӿں�������ƶ�ͼ�δ�ӡ��С��Ϸ
*	ף����ˣ�ָ�ӹ٣�
*
****************************************************************************/

#include "Shape.hpp"
#include "BGCreator.hpp"
#include "ShapeCreator.hpp"
#include "AnimationCreator.hpp"

int main()
{
	ShapeCreator shapeCreator;
	BGCreator bgCreator;
	AnimationCreator animationCreator(shapeCreator, bgCreator);

	animationCreator.Run();

	system("pause");
	return 0;
}