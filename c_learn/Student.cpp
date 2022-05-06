#include "Student.hpp"


//只写实现，不写声明。

void Student::setAge(int age) {
    this -> age = age;
}

void Student::setName(char const * name) {
    this -> name = name;
}

int Student::getAge() {
    return this -> age;
}

char const *  Student::getName() {
    return this -> name;
}
