//
//  T20Class.cpp
//  c_learn
//
//  Created by lixuechong on 2022/4/22.
//

#include "T20Class.hpp"

//此处有隐式的this。是一个指针常量[T20Class * const this].表示指针不可修改，指针指向的值可以修改。
void T20Class::change1()  {
    //就相当于是这种写法。
    T20Class * const _this = this;
    _this -> age1 = 10;
    
    //但是_this不能修改地址.
//        _this = 0x33332;//此处报错。
    
    this -> age1 = 10;
}

//在函数后面增加const，是一个常量指针常量[const T20Class * T20Class this].表示this都不可以被修改.
void T20Class::change2() const {
//    this -> name = "";//此时报错.
}

int T20Class::getAge() {
    return this -> age;
}
