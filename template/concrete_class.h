
/**
 * @file concrete_class.h
 * @author Jack.wen (selfi_xiaowen@sina.com)
 * @brief 具体实现类
 * @version 0.0.1
 * @date 2021/06/24 18:47:00
 *
 * @copyright Copyright (c) 2021
 *
 */


#ifndef _CONCRETE_CLASS_H_
#define _CONCRETE_CLASS_H_


#include "abstract_class.h"

//阿里
class Alibaba : public Company
{
public:
	virtual void Interview(){ std::cout << " Alibaba Interview " << std::endl;};
	virtual void Offer(){ std::cout <<" Alibaba Offer " << std::endl;}
};


//腾讯
class Tencent : public Company
{
public:
	virtual void Interview(){ std::cout << " Tencent Interview " << std::endl;};
	virtual void Offer(){ std::cout << " Tencent Offer " << std::endl;};

};


#endif //_CONCRETE_CLASS_H_


