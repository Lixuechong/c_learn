#include <stdio.h>
#include <iostream>

using namespace std;

class Person {
    
public:
    int age;
    char * name;
    
    Person(char * name, int age) {
        this -> age = age;
        this -> name = name;
    }
    
    void print() {
        
        cout << this -> age << this -> name << endl;
    }
    
};

//继承的Person类，默认是隐式的private Person，如下：
//class Student : private Person {//这样的继承，在class Student以外是不能访问Person中的任何变量、属性和函数的。
//必须使用如下的方式，才可以在class Student之外调用.
class Student : public Person {
    
public:
    
    Student(char * name, int age): Person(name, age) {
        
    }
    
    void test() {
        
        print();
    }
    
};

/**
 多继承
 在java中不允许多继承，可能会导致代码不健壮（二义性）。
 */


int main24() {
    Student stu("李元霸",11);
    stu.name = "";
    
    return 0;
}
