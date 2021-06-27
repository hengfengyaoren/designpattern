
/**
 * @file concrete_handler.h
 * @author Jack.wen (selfi_xiaowen@sina.com)
 * @brief 创建具体处理类
 * @version 0.0.1
 * @date 2021/06/26 18:47:00
 *
 * @copyright Copyright (c) 2021
 *
 */


#ifndef _CONCRETE_HANDLER_H_
#define _CONCRETE_HANDLER_H_


#include "handler.h"

//经理
class Manager : public IHandler
{
public:
	virtual void HandlerRequest(float days){
		if (days <= 1){
			std::cout <<" Manager 批准了 " << days << "天假期" << std::endl;
		}else{
			m_pSuccessor->HandlerRequest(days);
		}
	}

};


//总监
class Director : public IHandler
{
public:
	virtual void HandlerRequest(float days){
		if (days <= 3){
			std::cout <<" Director 批准了 " << days << "天假期" << std::endl;
		}else{
			m_pSuccessor->HandlerRequest(days);
		}
	}

};


//CEO
class CEO : public IHandler
{
public:
	virtual void HandlerRequest(float days){
		if (days <= 7){
			std::cout <<" CEO 批准了 " << days << "天假期" << std::endl;
		}else{
			std::cout << "给你放长假,以后不用来上班啦!" << std::endl;
		}
	}

};




#endif //_CONCRETE_HANDLER_H_



