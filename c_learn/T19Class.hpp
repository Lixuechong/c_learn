#ifndef T19Class_hpp
#define T19Class_hpp

#include <stdio.h>
#include <iostream>


class Dog {
    
public:
    
    char * info;
    int age;
    
//    static int id = 9;//此处不允许这样初始化，报异常。
    static int id;
    
    static void update() {
        //静态函数中也不允许为静态变量赋值。
        id += 9;
    }
    
    Dog() {
        //在构造函数中初始化static变量，也是会报异常。
//        id = 9;
    }
    
};

#endif /* T19Class_hpp */
