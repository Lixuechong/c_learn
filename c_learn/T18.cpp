#include <stdio.h>
#include <iostream>
#include <stdarg.h>

using namespace std;


/**
 C++的可变参数与C++ static关键字
 Java中的可变参数可以直接定义 int... xxx. xxx可以传入多个值。
 */

//此处第二个参数就是C++中的可变参数
void sum(int count, ...) {
    va_list vp;//可变参数的动作.
    
    //可变参数已准备好读取vp中的数据。
    //第二个参数类似于shared中的表名。
    va_start(vp, count);
    
    //此时可以取值(...中的值)
//    int num = va_arg(vp, int);
//    cout << num << endl;
//
//    num = va_arg(vp, int);
//    cout << num << endl;
//
//    num = va_arg(vp, int);
//    cout << num << endl;
//
//    num = va_arg(vp, int);
//    cout << num << endl;
//
    //也可以通过count进行迭代可变参数的值.
    int i = 0;
    for(i = 0; i < count; i++) {
        int num = va_arg(vp, int);
        cout << num << endl;
    }
    
    //关闭可变参数的动作。
    va_end(vp);
}

int main18() {
    
    sum(4, 2,3,4,5);
    
    return 0;
}
