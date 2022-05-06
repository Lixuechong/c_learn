#ifndef T20Class_hpp
#define T20Class_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class T20Class {
    
private:
    int age = 0;
    
public:
    char * name = "";
    int age1 = NULL;//此处和java不同，如果没有赋值，java中是默认值0.C++中是系统值。
    
    void change1();
    
    void change2() const;
    
    T20Class(int age) {
        this -> age = age;
    }
    
    int getAge();
    
    //声明showAction函数成为友元函数的声明体。
    friend void showAction(T20Class * t20, int age);
};

#endif /* T20Class_hpp */
