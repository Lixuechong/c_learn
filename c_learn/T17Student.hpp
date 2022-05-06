#ifndef T17Student_hpp
#define T17Student_hpp

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class T17Student{
    
public:
    
    T17Student(char * name): T17Student(name, 100) {
        printf("一个构造参数函数 this = %p\n", this);
    }
    
    T17Student(char * name, int age) {
        printf("两个构造参数函数 this = %p\n", this);
        this -> name = (char *)malloc(sizeof(char *) + 10);
        strcpy(this -> name, name);
        this -> age = age;
    }
    
    ~T17Student() {//析构构造函数，重复释放会报错。
        printf("析构构造函数 this = %p, &(this -> name) = %p\n", this, &(this -> name));
        if(this -> name) {
            free(this -> name);
            this -> name = NULL;
        }
    }
    
    //拷贝构造函数
    T17Student(const T17Student & stu) {
        printf("拷贝构造函数 this = %p， &stu = %p, &name = %p\n", this, &stu, &stu.name);
        
        //这种拷贝方式，就是把创建name的堆空间的指针给与新对象的name。称之为浅拷贝。
        this -> name = stu.name;
        
        //每次调用拷贝构造函数的时候，把新对象的name都开辟一个内存空间。称之为深拷贝.
        this -> name = (char *)malloc(sizeof(char *) + 10);
        strcpy(this -> name, stu.name);
        this -> age = stu.age;
    }
    
    void setName(char * name);
    
    void setAge(int age);
    
    char * getName();
    
    int getAge();
    
    
private:
    char * name;
    int age;
};

#endif /* T17Student_hpp */
