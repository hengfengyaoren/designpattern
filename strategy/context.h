
/**
 * @file context.h
 * @author Jack.wen (selfi_xiaowen@sina.com)
 * @brief: 创建环境角色类
 * @version 0.0.1
 * @date 2021/06/26 18:47:00
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef _CONTEXT_H_
#define _CONTEXT_H_

#include "strategy.h"

class Context
{
public:
	Context(IStrategy* strategy) {m_pStrategy = strategy;}
	void Travel(){m_pStrategy->Travel();}
private:
	IStrategy *m_pStrategy;
};


#endif //_CONTEXT_H_




