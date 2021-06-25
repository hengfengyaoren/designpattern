
/**
 * @file concrete_observer.h
 * @author Jack.wen (selfi_xiaowen@sina.com)
 * @brief 具体观察者类
 * @version 0.0.1
 * @date 2021/06/24 18:47:00
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef _CONCRETE_OBSERVER_H_
#define _CONCRETE_OBSERVER_H_

#include "observer.h"
#include <iostream>
#include <vector>
#include <string>

//具体观察者
class ConcreteObserver : public IObserver
{
public:
	ConcreteObserver(std::string name) {m_strName = name;}

	void Update(float price){
		std::cout << m_strName << " - price: " << price << "\n";	
	}

private:
	std::string m_strName;		//名字
};


#endif //_CONCRETE_OBSERVER_H_


