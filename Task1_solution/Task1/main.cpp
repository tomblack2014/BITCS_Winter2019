/***************************************************************************
*
*	首先欢迎大家来到算法组，希望大家都能够渡过一个充实的寒假集训
*	先让我们来做一个热身练习吧，写一些代码热热身，顺便加深友♂谊
*	根据忍者世界三人组队的传统，我先假设大家是三人一组来完成这个任务的
*	任务很简单，希望大家根据我已经设计好的c++接口合力完成移动图形打印的小游戏
*	祝你好运，指挥官！
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