
/**
 * @file concrete_strategy.h
 * @author Jack.wen (selfi_xiaowen@sina.com)
 * @brief 具体策略类
 * @version 0.0.1
 * @date 2021/06/26 18:47:00
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef _CONCERTE_STRATEGY_H_
#define _CONCERTE_STRATEGY_H_

#include "strategy.h"
#include <iostream>


//骑自行车
class BikeStrategy : public IStrategy
{
public:
	virtual void Travel() {std::cout <<"Travel by bike" << std::endl;}
};


//开车
class CarStrategy : public IStrategy
{
public:
	virtual void Travel() {std::cout <<"Travel by car" << std::endl;}
};



//坐火车
class TrainStrategy : public IStrategy
{
public:
	virtual void Travel() {std::cout <<"Travel by train" << std::endl;}
};


#endif //_CONCERTE_STRATEGY_H_
