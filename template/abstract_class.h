
/**
 * @file abtracet_class.h
 * @author Jack.wen (selfi_xiaowen@sina.com)
 * @brief 抽象类
 * @version 0.0.1
 * @date 2021/06/24 18:47:00
 *
 * @copyright Copyright (c) 2021
 *
 */


#ifndef _ABSTRACET_CLASS_H_
#define _ABSTRACET_CLASS_H_

#include <iostream>

class Company
{	
public:
	void Recruit()  //固定的流程
	{
		CareerTalk();
		ReceiveResume();
		Interview();
		Offer();	
	}

	//宣讲
	virtual void CareerTalk(){ std::cout << " CareerTalk " << std::endl;};
	
	//接受简历
	virtual void ReceiveResume(){ std::cout << " ReceiveResume " << std::endl;};
	
	//面试
	virtual void Interview(){};
	
	//发放offer
	virtual void Offer(){};
};



#endif //_ABSTRACET_CLASS_H_

