#include "Student.hpp"

int main13() {
    
    Student stud;//这种方式是在栈中开辟空间。
    
    char const * name = "李元霸";//在C++11中，定义字符串，必须是char const类型的。
    stud.setName(name);
    stud.setAge(20);
    
    printf("姓名 = %s, 年龄 = %d\n", stud.getName(), stud.getAge());
    
    //下面是为Student开辟一个堆空间。动态开辟
    
    Student * stud2 = new Student();//使用new关键字开辟的对象，在堆空间中开辟。
    
    char const * name2 = "李元霸2";//在C++11中，定义字符串，必须是char const类型的。
    stud2 -> setName(name2);
    stud2 -> setAge(22);
    
    printf("姓名2 = %s, 年龄2 = %d\n", stud2 -> getName(), stud2 -> getAge());
    
    delete stud2;//释放堆空间对象的方式。
    stud2 = NULL;//这里同样需要重新指向为NULL指针。
    
    return 0;
}
