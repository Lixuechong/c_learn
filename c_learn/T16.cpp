#include "Student.hpp"

/**
 拷贝构造函数
 */

typedef struct Person {
    int age;
    char const * name;
}Person;

int main16() {
    
    Person per1 = {100, "张三丰"};//在栈中开辟对象
    
    //只是进行了值copy。
    Person per2 = per1;//此时会对结构体进行拷贝。把per1成员的值赋值给per2.但是两者的地址不同。
    
    printf("per1 = %p, per2 = %p\n", &per1, &per2);
    
    Student stu1("李鬼", 34);
//    Student stu2;
//
//    //这样不会调用我们自己定义的拷贝构造函数.但是会调用默认的拷贝构造函数.
//    stu2 = stu1;
    
    
    //相当于是stu2初始化后，调用了拷贝构造函数。可以理解为初始化后, 执行了stu2(stu1);的语句。
    Student stu2 = stu1;  // 这样赋值是会调用 自定义拷贝构造函数，我们自己赋值
    
    printf("stu2 = %p, stu1 = %p\n", &stu2, &stu1);
    printf("stu2 value = %s, stu1 = %d\n", stu2.getName(), stu2.getAge());
    
    Student * stu_p1 = new Student("肚子疼",1111);//在堆空间中创建对象.
    Student * stu_p2 = stu_p1;//这种方式不会执行拷贝构造函数，是把stu_p1赋值给了stu_p2。所以两者的指针地址一致。
    
    printf("stu_p1 = %p, stu_p2 = %p\n", stu_p1, stu_p2);//两者的地址一致。
    
    stu_p2 -> setName("肚子巨疼");//两个的内容都会被修改。
    
    return 0;
}

