#include "T17Student.hpp"

void T17Student::setName(char * name) {
    T17Student::name = name;
}

void T17Student::setAge(int age) {
    T17Student::age = age;
}

char * T17Student::getName() {
    return this -> name;
}

int T17Student::getAge() {
    return this -> age;
}
