#include "T22.hpp"


Rect::Rect(int x, int y){
    this -> x = x;
    this -> y = y;
}

int Rect::getX() {
    return this -> x;
}

int Rect::getY(){
    return this -> y;
}

void Rect::setX(int x) {
    this -> x = x;
}

void Rect::setY(int y) {
    this -> y = y;
}

Rect Rect::operator + (const Rect & rect) const {
    
    int x = this -> x + rect.x;
    int y = this -> y + rect.y;
    
    return Rect(x, y);
}

int main22() {
    
    Rect re1(100, 200);
    Rect re2(200, 400);
    
    Rect result = re1 + re2;
    
    cout << result.getX() << " , " << result.getY() << endl;
    
    return 0;
}



