//
//  T12.cpp
//  c_learn
//
//  Created by lixuechong on 2022/4/18.
//

#include <iostream>

using namespace std;


/**
 函数的第二个第三个参数，C++可以支持。
 为了保证后续的扩展，提前想出的预留参数。
 */
void upload(char * logFile, int, bool) {
    
}

typedef struct {
    char * username;
    int age;
}Student;

void insert(const Student & student) {
    
//    student.age = 11;
    
};

//函数重载
int add(int num1, int num2) {
    return num1 + num2;
};

int add(int num1, int num2, int num3) {
    return num1 + num2 + num3;
};

//可以添加默认值（默认形参）
int add(int num1 = 0, int num2 = 0, int num3 = 0, int num4 = 0, bool isReturn = 0) {
    return num1 + num2 + num3 + num4;
};

int main12() {
    
//    add(1, 2);//此时会报错，因为不知道执行哪个函数.
    
    //可以调用c语言
    printf("这是c语言的打印\n");
    
//    const << "这是C++的打印" << endl;//这里<<会报错。
//
//    const << "是使用<<的操作符重载打印的日志\n";
    
    //C++的常量
//    const int number = 20;
//
//    int * num_p = &number;//C++中不允许修改const定义的常量的值。
    
//    变量引用的原理与使用
    
    
    int n1 = 999;
    int n2 = n1;//n2 = n1这种方式，只是进行了值传递，新开辟了一个内存地址n2，把n1的值传递给n2.
    
    int n3 = 888;
    int & n4 = n3;//这种方式，是进行了址传递。只是增加了一个999的内存地址的引用。
    
    n4 = 111;//把所有888所在的内存地址的本身进行修改。
    printf("n3 = %d\n", n3); //结果 == n3 = 111
    
    //常量引用.
    //常量引用的作用类似java的final，不允许被修改。包括对象的值。
    Student student = {"张无忌", 30};
    insert(student);
    
    return 0;
}
