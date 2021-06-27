/*
 * 在不必改变原类文件和使用继承的情况下，动态的扩展一个对象的功能。它是通过创建一个包装对象，也就是装饰来包裹真实的对象。
 *
 * 例子: 星巴克  咖啡  调味料
 *
 * 本质:
 * 动态组合
 *
 * 要点：
 * 1通过采用组合而非继承的手法，装饰器模式实现了运行时动态扩展对象功能的能力，而且可以根据需要扩展多个功能。避免了使用继承带来的灵活性差和多子类问题。
 * 2 不是解决多子类的多继承问题，而是解决父类在多个方向上的扩展功能问题
 * 3 装饰器模式把一系列复杂的功能分散到每个装饰器中，一般一个装饰器实现一个功能，实现复用装饰器的功能
 *
 * 优缺点:
 * 优点：
 * 1 decorator模式与继承关系的目的都是扩展对象的功能，但是decorator可以提供比继承更多的灵活性
 * 2 通过使用不同的具体装饰类以及这些装饰类的排列组合，可以创造出很多不同行为的组合
 * 缺点：
 * 1 这种比继承更加灵活性机动的特性，也同事意味着更加多的复杂性
 * 2 装饰模式会导致设计出现许多小雷，过渡使用，会使程序变得复杂
 * 3 装饰模式针对对象构建类型编程。
 *
 * 适用场景:
 * 1 需要扩展一个类的功能，或者给一个类添加职责
 * 2 动态的给一个对象添加功能，这些功能可以动态撤销
 * 3 需要增加由一些基本功能排列组合而产生的非常大量的功能，从而使得继承关系变的不现实。
 *
 *
 *
 *
 */




// main.cpp
#include "concrete_component.h"
#include "concrete_decorator.h"
#include <iostream>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main()
{
    /********** 黑咖啡 **********/
    IBeverage *pHouseBlend = new HouseBlend();
    cout << pHouseBlend->Name() << " : " << pHouseBlend->Cost() << endl;

    // 黑咖啡 + 奶油
    CondimentDecorator *pCream = new Cream(pHouseBlend);
    cout << pCream->Name() << " : " << pCream->Cost() << endl;

    // 黑咖啡 + 摩卡
    CondimentDecorator *pMocha = new Mocha(pHouseBlend);
    cout << pMocha->Name() << " : " << pMocha->Cost() << endl;

    // 黑咖啡 + 糖浆
    CondimentDecorator *pSyrup = new Syrup(pHouseBlend);
    cout << pSyrup->Name() << " : " << pSyrup->Cost() << endl;

    /********** 深度烘培咖啡豆 **********/
    IBeverage *pDarkRoast = new DarkRoast();
    cout << pDarkRoast->Name() << " : " << pDarkRoast->Cost() << endl;

    // 深度烘培咖啡豆 + 奶油
    CondimentDecorator *pCreamDR = new Cream(pDarkRoast);
    cout << pCreamDR->Name() << " : " << pCreamDR->Cost() << endl;

    // 深度烘培咖啡豆 + 奶油 + 摩卡
    CondimentDecorator *pCreamMocha = new Mocha(pCreamDR);
    cout << pCreamMocha->Name() << " : " << pCreamMocha->Cost() << endl;

    // 深度烘培咖啡豆 + 奶油 + 摩卡 + 糖浆
    CondimentDecorator *pCreamMochaSyrup = new Syrup(pCreamMocha);
    cout << pCreamMochaSyrup->Name() << " : " << pCreamMochaSyrup->Cost() << endl;

    SAFE_DELETE(pSyrup);
    SAFE_DELETE(pMocha);
    SAFE_DELETE(pCream);
    SAFE_DELETE(pHouseBlend);

    SAFE_DELETE(pCreamMochaSyrup);
    SAFE_DELETE(pCreamMocha);
    SAFE_DELETE(pCreamDR);
    SAFE_DELETE(pDarkRoast);

    getchar();

    return 0;
}




