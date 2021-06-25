
/**
 * @file subject.h
 * @author Jack.wen (selfi_xiaowen@sina.com)
 * @brief 具体主题类
 * @version 0.0.1
 * @date 2021/06/24 18:47:00
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef _CONCRETE_SUBJECT_H_
#define _CONCRETE_SUBJECT_H_

#include "subject.h"
#include "observer.h"
#include <iostream>
#include <list>

//具体主题
class ConcreteSubject : public ISubject
{
public:
	ConcreteSubject(){ m_fPrice = 10.0;};

	void SetPrice(float price){
		m_fPrice = price;
	}

	void Attach(IObserver *observer){
		m_observers.push_back(observer);
	}

	void Detach(IObserver *observer){
		m_observers.remove(observer);
	}

	void Notify(){
		std::list<IObserver*>::iterator it = m_observers.begin();
		while(it != m_observers.end()){
			(*it)->Update(m_fPrice);
			++it;
		}
	}

private:
	std::list<IObserver*> m_observers;	//观察者列表
	float m_fPrice;				//价格
};



#endif //_CONCRETE_SUBJECT_H_


