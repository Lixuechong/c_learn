#ifndef T22_hpp
#define T22_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Rect{
    
    
private:
    int x;
    int y;
    
public:
    
    Rect(int, int);
    
    void setX(int);
    
    void setY(int);
    
    int getX();
    
    int getY();
    
    //操作符重载
    Rect operator + (const Rect &) const ;
    
};

#endif /* T22_hpp */
