//
//  T25.cpp
//  c_learn
//
//  Created by lixuechong on 2022/5/11.
//

/**
 C++异常
 */

#include <stdio.h>
#include <iostream>

using namespace std;

void throwException1() {
    
    cout << "调用了throwException1" << endl;
    throw "抛出了一个异常";
}

class BaseException {
public:
    char * message = "这是一个BaseException的异常.";
    
    char * getMessage() {
        return message;
    }
};

void throwException2() {
    
    cout << "调用了throwException2" << endl;
    
    BaseException * exception;
    
    throw exception;
}

int main25() {
    
    try {
        throwException1();
    }catch(const char * &msg) {
        cout << "捕获了异常1 = " << msg << endl;
    }
    try {
        throwException2();
    }catch(BaseException * &msg) {
        cout << "捕获了异常2 = " << msg->getMessage() << endl;
    }
    return 0;
}
