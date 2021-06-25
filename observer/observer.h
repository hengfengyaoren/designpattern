
/**
 * @file observer.h
 * @author Jack.wen (selfi_xiaowen@sina.com)
 * @brief 抽象观察者类
 * @version 0.0.1
 * @date 2021/06/24 18:47:00
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef _OBSERVER_H_
#define _OBSERVER_H_


//抽象观察者
class IObserver
{
public:
	virtual void Update(float price) = 0;	//更新价格
};


#endif //_OBSERVER_H_


