#include "T20Class.hpp"

/**
 友元函数与友元类
 总结：友元函数在class中声明友元函数的声明，在其他地方实现友元函数后，友元函数的实现体可以随意访问class中的私有变量和函数。
 */

//此处为友元函数的实现体.
void showAction(T20Class * t20, int age) {
    
    t20 -> age = 20;//成为友元函数的实现之前，不可以修改私有变量的值。
}

int main20() {
    
    T20Class t20 = T20Class(10);
    
    showAction(&t20, t20.getAge());
    
    cout << t20.getAge() << endl;
    
    return 0;
}
