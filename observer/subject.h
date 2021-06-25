
/**
 * @file subject.h
 * @author Jack.wen (selfi_xiaowen@sina.com)
 * @brief 抽象主题类
 * @version 0.0.1
 * @date 2021/06/24 18:47:00
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef _SUBJECT_H_
#define _SUBJECT_H_

class IObserver;

//抽象主题
class ISubject
{
public:
	virtual void Attach(IObserver *) = 0;	//注册观察者
	virtual void Detach(IObserver *) = 0;	//注销观察者
	virtual void Notify() = 0;		//通知观察者
};


#endif //_SUBJECT_H_


