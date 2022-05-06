#include <stdio.h>
#include <iostream>

using namespace std;


class ArrayClass {
    
    
private:
    int size =0;
    int * arrayValue;
    
public:
    
    void set(int index, int value) {
        this -> arrayValue[index] = value;
        this -> size++;
    }
    
    int getSize() {
        return this -> size;
    }
    
    //重载[]
    int operator [](int index) {
        int itemValue = *(this -> arrayValue + index);
        return itemValue;
    }
    
    ArrayClass(int defaultLength) {
        
        this -> arrayValue = (int *) malloc(sizeof(int) * defaultLength);
        cout << "arrayValue length = " << sizeof(this -> arrayValue) << ", default length = " << sizeof(int *) * defaultLength << endl;//这里打印的长度为什么是8???
    }
    
    ~ArrayClass(){
        cout << "执行了析构函数" << endl;
        if(this -> arrayValue){
            free(this -> arrayValue);
            this -> arrayValue = NULL;
        }
    }
};

void iteratorr(ArrayClass & c) {
    for(int i = 0;i < c.getSize(); i++) {
        cout << c[i] << endl;
    }
}

int main23() {
    
    ArrayClass a(16);
    a.set(0, 111);
    a.set(1, 222);
    a.set(2, 333);
    a.set(3, 444);
    a.set(4, 555);
    
    iteratorr(a);
    
    return 0;
}
