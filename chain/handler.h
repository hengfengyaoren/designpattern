
/**
 * @file handler.h
 * @author Jack.wen (selfi_xiaowen@sina.com)
 * @brief 创建抽象处理类
 * @version 0.0.1
 * @date 2021/06/26 18:47:00
 *
 * @copyright Copyright (c) 2021
 *
 */


#ifndef _HANDLER_H_
#define _HANDLER_H_

#include <iostream>


//抽象处理者
class IHandler
{
public:
	IHandler(){m_pSuccessor = NULL;}
	virtual ~IHandler(){}
	// 设置后继者
	void SetSuccessor(IHandler* successor){m_pSuccessor = successor;}
	// 处理消息接口
	virtual void HandlerRequest(float days) = 0;

protected:
	IHandler *m_pSuccessor; 	//后继者
};


#endif //_HANDLER_H_



