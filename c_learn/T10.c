//
//  T10.c
//  c_learn
//
//  Created by lixuechong on 2022/4/15.
//

#include <stdio.h>
#include <string.h>

//定义一个结构体
struct Dog {
    
    char name[10];
    int age;
    char sex;
    
};//注意：结束必须有分号。


//这是可以定义一个默认的变量
struct Person {
    char * name;
    int age;
    char sex;
} dliven = {"德莱文", 20, 'n'},
worik;

/**
 结构体嵌套
 */
struct Study {
    char * studyContent;
};

struct Student {
    char * name;
    int age;
    char sex;
    struct Study study;
    
    struct Hobby {
        char * hobbyContent;
    } game;
};

int main10() {
    
    //使用结构体。
    struct Dog dog;//此时成员是没有进行初始化的。结构体中的成员都是系统值。比如使用dog.age时，会是系统值。
    
    //name = \240\362\357\277\367, age = 1, sex = 
    printf("dog name = %s, age = %d, sex = %c\n", dog.name, dog.age, dog.sex);
    
    //对结构体进行赋值
//    dog.name = "旺财";//此时会报错，char * 的值不允许修改，只能改变指针指向。
    strcpy(dog.name, "旺财");//此时的name为一个栈空间的数组，所以必须copy字符到数组中，或者手动为其添加值。
    dog.age = 10;
    dog.sex = 'g';
    
    printf("dog name = %s, age = %d, sex = %c\n", dog.name, dog.age, dog.sex);
    
    
    printf("person name = %s, age = %d, sex = %c\n", dliven.name, dliven.age, dliven.sex);
    //对person结构体进行赋值.
    
    worik.name = "沃里克";//这里的name是一个指针，所以可以直接对它进行指向。
    worik.age = 2002;
    worik.sex = 'n';
    
    printf("person name = %s, age = %d, sex = %c\n", worik.name, worik.age, worik.sex);
    
    //结构体嵌套的初始化
    struct Student xm = {"小明", 10, 'n', {"网课"}, {"王者农药"}};
    
    printf("student name = %s, age = %d, sex = %c, study = %s, hobby = %s\n", xm.name, xm.age, xm.sex, xm.study.studyContent, xm.game.hobbyContent);
    
    return 0;
}
