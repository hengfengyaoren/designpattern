/*
 * 定义对象间的一种一对多(变化)的依赖关系，以便当一个对象(Subject)的状态发生变化的时候，所有依赖它的对象都得到通知并自动更新.
 *
 * 例子: 气象站发布资料给数据中心,数据中心经过处理，将气象信息更新到两个不同的终端
 *
 * 设计原则:
 * 单一职责原则
 * 接口分离原则
 * 依赖倒置原则
 *
 * 本质:
 * 触发联动
 *
 * 要点：
 * 1 观察者模式使得我们可以独立改变目标和观察者，二者关系松耦合
 * 2 观察者自己决定是否订阅通知，目标对象并不关注谁订阅了
 * 3 观察者不依赖通知顺序，目标对象也不需要
 * 4 常用于基于事件的ui框架中，也是mvc组成部分
 * 5 常用在分布式系统，actor框架中
 *
 *
 * 优缺点:
 * 优点：
 * 1 观察者和被观察者是抽象耦合的
 * 2 建立一套触发机制
 * 缺点：
 * 1 如果一个被观察者对象有很多直接和间接的观察者，将所有的观察者都通知会花事件
 * 2 如果观察者和观察目标之间有循环依赖的话，观察目标会触发他们之间进行循环调用，会产生死循环
 * 3 只能让观察者知道目标发生了变化，不知道是怎么发生变化的。
 *
 *
 * 适用场景:
 *  有多个子类共有的方法，且逻辑相同
 *  重要的，复杂的方法，可以考虑作为模板方法。
 *
 */


#include "concrete_subject.h"
#include "concrete_observer.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p){delete(p);(p)=NULL;}}
#endif

int main()
{

	//创建主题，观察者
	ConcreteSubject *pSubject = new ConcreteSubject();
	IObserver *pObserver1 = new ConcreteObserver("Jack ma");
	IObserver *pObserver2 = new ConcreteObserver("Pony");

	//注册观察者
	pSubject->Attach(pObserver1);
	pSubject->Attach(pObserver2);

	//更改价格，并通知观察者
	pSubject->SetPrice(12.5);
	pSubject->Notify();

	//注销观察者
	pSubject->Detach(pObserver2);
	//再次更改状态，并通知观察者
	pSubject->SetPrice(15.0);
	pSubject->Notify();

	SAFE_DELETE(pObserver1);
	SAFE_DELETE(pObserver2);
	SAFE_DELETE(pSubject);

	getchar();


	return 0;
}

