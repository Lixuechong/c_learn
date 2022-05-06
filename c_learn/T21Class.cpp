#include "T21Class.hpp"


//class的实现

//静态属性.不需要增加static关键字
int Pig::id = 20000;

//构造函数
Pig::Pig() {
    
    
}

Pig::Pig(char * name) {
    this -> name = name;
}

Pig::Pig(char * name, int age) {
    this -> name = name;
    this -> age = age;
}

//析构函数
Pig::~Pig() {
    //释放堆空间的内存。
}

//拷贝构造函数
Pig::Pig(const Pig & pig) {
    //可以实现浅拷贝或者深拷贝.
    
    //浅拷贝
    this -> name = pig.name;
    this -> age = pig.age;
    
    //malloc是深拷贝
}

//普通函数
void Pig::setAge(int age) {
    this -> age = age;
}

void Pig::setName(char * name) {
    this -> name = name;
}

int Pig::getAge(){
    return this -> age;
}

char * Pig::getName() {
    return this -> name;
}

//常量函数
void Pig::showPigInfo() const {
    
    cout << this -> name << this -> age << endl;
}

//静态函数
void Pig::changeId(int i) {
    id = i;
}

/**
 友元函数
 注：实现时不需要关键字和 Pig::,只需要保证函数名和参数一致即可。
 */
void changeName(Pig * pig, char * name) {
    pig -> age = 2020;
}
