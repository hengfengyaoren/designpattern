/*
 * 定义一系列算法，把他们一个个封装起来，并且使他们可以相互替换。使得算法独立于他的客户端程序而变化.
 *
 * 例子: 旅行问题  自行车，汽车，火车
 *
 * 本质:
 * 分离算法，选择实现
 *
 * 要点：
 * 策略模式提供了以系列可重用的算法，从而可以使得类型在运行时候方便的根据需要之间进行切换
 * 消除条件判断语句，解耦和
 * 充分体现了开闭原则，单一职责
 *
 *
 * 优缺点:
 * 优点：
 * 1 各自使用封装的算法，可以很容易引入新的算法来满足相同的接口
 * 2 由于事先的同一个接口，所以策略之间可以自由切换
 * 3 客户端能够选择所需要的算法，无需使用swithc、case或if/esle
 * 4 算法细节完全封装在strategy类中，因此，可以不影响context类的情况下更改实现
 *
 * 缺点：
 * 1 客户端需要知道所有的策略，了解他们的区别
 * 2 策略模式将造成很多策略类
 *
 * 适用场景:
 * 1 多个类有不同的表现形式，每种表现形式可以独立成单独的算法
 * 2 需要在不同的情况下使用不同的算法
 * 3 对客户端隐藏具体的算法实现细节，彼此完全独立。
 *
 *
 */



// main.cpp
#include "context.h"
#include "concrete_strategy.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main()
{
    // 策略之间可以相互替换
    IStrategy *bike = new BikeStrategy();
    IStrategy *car = new CarStrategy();
    IStrategy *train = new TrainStrategy();

    Context *bikeContext = new Context(bike);
    Context *carContext = new Context(car);
    Context *trainContext = new Context(train);

    bikeContext->Travel();
    carContext->Travel();
    trainContext->Travel();

    SAFE_DELETE(bike);
    SAFE_DELETE(car);
    SAFE_DELETE(train);

    SAFE_DELETE(bikeContext);
    SAFE_DELETE(carContext);
    SAFE_DELETE(trainContext);

    getchar();

    return 0;
}



