#ifndef T21Class_hpp//有没有这个（T21Class_hpp）宏（Java 宏 == 常量）
#define T21Class_hpp//定义这个（T21Class_hpp）宏。

#include <stdio.h>
#include <iostream>

using namespace std;

class Pig {
    
    
private:
    int age;
    char * name;
    
public:
    
    //静态声明
    static int id;
    
    //构造函数的系列声明
    Pig();
    
    Pig(char *);
    
    Pig(char *, int);
    
    //析构函数
    ~Pig();
    
    //拷贝构造函数
    Pig(const Pig &);
    
    //普通函数
    int getAge();
    
    char * getName();
    
    void setAge(int);
    
    void setName(char *);
    
    void showPigInfo() const;
    
    //静态函数的声明
    static void changeId(int);
    
    //友元函数的声明
    friend void changeName(Pig *, char *);
    
    friend class Class;
};


class Class {
    
public:
    Pig pig;
    
    void setAge(int age){
        pig.age = age;
    }
};

#endif //关闭/结尾
