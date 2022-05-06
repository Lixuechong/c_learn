#include "T17Student.hpp"

//T17Student getT17Student(char * name) {
//
//    T17Student stu(name);
//
//    printf("getT17Student stu 地址 = %p\n", &stu);
//
//    return stu;
//
//}

void showStudent(T17Student stu) {
    
    cout << "showStudent &stu = " << &stu << endl;
}

int main17() {
    
    T17Student stu2("李贵", 30);
    
    printf("main stu 地址 = %p,内容 = %s, %d\n", &stu2, stu2.getName(), stu2.getAge());
    
    showStudent(stu2);
    
    return 0;
}

