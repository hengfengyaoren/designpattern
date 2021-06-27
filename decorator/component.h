
/**
 * @file component.h
 * @author Jack.wen (selfi_xiaowen@sina.com)
 * @brief 创建构建类
 * @version 0.0.1
 * @date 2021/06/26 18:47:00
 *
 * @copyright Copyright (c) 2021
 *
 */


#ifndef _COMPONENT_H_
#define _COMPONENT_H_

#include <string>

using namespace std;

// 所有饮料基类
class IBeverage
{
public:
	virtual string Name() = 0; 	//名称
	virtual double Cost() = 0;	//价钱
};


#endif //_COMPONENT_H_


