
/**
 * @file strategy.h
 * @author Jack.wen (selfi_xiaowen@sina.com)
 * @brief 抽象策略类
 * @version 0.0.1
 * @date 2021/06/26 18:47:00
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef _STRATEGY_H_
#define _STRATEGY_H_


// 出行策略
class IStrategy
{
public:
	virtual void Travel() = 0;	
};


#endif //_STRATEGY_H_




