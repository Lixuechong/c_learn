#include "Student.hpp"


/**
 构造函数详解
 */

using namespace std;

int main15() {
    
    
    //stu4 -> , 调用一级指针的成员.
    
    //在栈区空间开辟空间。
    
    Student stu1;//调用了空参数的构造函数
//    stu1.setAge(11);
//    stu1.setName("李元霸");
    
    cout << "name1 = " << stu1.getName() << ", age1 = " << stu1.getAge() << endl;
    
    //系统源码中会有下面的写法.
    Student stu3("李元霸3", 33);
    cout << "name3 = " << stu3.getName() << ", age3 = " << stu3.getAge() << endl;
    
    
    //在堆区开辟空间。使用new关键字。记得最后使用delete回收空间，否则内存占用会原来越大.
    Student * stu4 = new Student("李元霸4", 44);
    
    cout << "name4 = " << stu4 -> getName() << ", age4 = " << stu4 -> getAge() << endl;
    
    delete stu4;
    stu4 = NULL;
    
    return 0;
}
