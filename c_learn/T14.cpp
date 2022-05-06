#include <iostream>

using namespace std;

/**
 命名空间
 */

/**
 如何自定义命名空间
 */
namespace lxc {
int age = 33;
char const * name = "lxc";

void show() {
    cout << "name" << name << ", age:" << age << endl;
}
};

//当命名空间中有重复的变量和函数时，
namespace lxc2 {
int age = 33;
char const * name = "lxc";

void show() {
    cout << "name2" << name << ", age2:" << age << endl;
}
};


//在这里定义命名空间，可以在文件中全局使用，不论哪个函数都可以.想要只在某个函数中使用，可以在函数中引用。
//using namespace lxc;//类似于java的import，但是C++中可以写到函数中。

int main14() {
    
    cout << "九阳神功" << endl;
    
    //这种引用方式，只能在main函数中使用lxc的命名空间.
    using namespace lxc;
    
    int age = lxc::age;
    
    using namespace lxc2;
//    show();//这个方法在lxc和lxc2中都存在，应该在这之前增加命名空间::
    lxc::show();
    
    return 0;
}
