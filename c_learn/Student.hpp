#ifndef Student_hpp
#define Student_hpp

#include <iostream>
#include <stdlib.h>

using namespace std;


//只写声明，不写实现。

//此处是对结构体（对象）的声明，需要在cpp中实现。

/**
 C++中的对象指向的是一个指针
 */
class Student {
    
private://下面的是私有的，外界不允许访问。
    
    char const * name;
    int age;
    
    
public://下面的一切都是公有的。
    void setAge(int age);//此处只是声明
    
    void setName(char const * name);
    
    int getAge();
    char const *  getName();
    
    //构造函数
//    Student(){
//        cout << "空参构造函数" << endl;
//    }
    
    //构造函数调用重载的构造函数,会先调用两个参数的构造函数，再调用当前函数实现体中的代码.
    Student(): Student("李元霸2", 22) {
        cout << "空参构造函数" << endl;
    }
    
    //系统源码中有这样的写法。与上面的含义一致。
    Student(char const * name): name(name){
        cout << "一个参构造函数, name = " << name << endl;
    }
    
    Student(char const * name, int age): name(name), age(age){
        cout << "两个参构造函数, name = " << name << ", age = " << age << endl;
    }
    
    //析构函数，在回收该对象时会执行。用于释放操作。
    ~Student(){
        cout << "执行了析构函数，地址 = " << this << endl;
    }
    
    
    //拷贝构造函数, 它默认存在，我们看不到。类似于空参的构造函数。
    //我们重写后，默认拷贝构造函数会被替换。
    Student(const Student & student) {
        //在这里，我们可以对该对象的值进行赋值操作.
        this -> name = student.name;
        this -> age = student.age;
        
        cout << "拷贝构造函数， 地址 = " << this << endl;
    }
    
};

#endif /* Student_hpp */
