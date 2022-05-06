#include "T19Class.hpp"

using namespace std;


/**
 C++的 static 关键字
 
 总结：静态的变量必须先初始化，再实现。如果没有为静态变量或属性实现时，不可以为其进行赋值。
 */

int main19() {
    
    Dog dog;
    
//    Dog::update();//class的两个冒号可以调用静态函数。但是同样不可以为id赋值。
    
    cout << dog.id << endl;
    
    //但是后面为id实现之后，后面就可以再次为id赋值。
    Dog::update();
    
    cout << dog.id << endl;
    
    return 0;
}
