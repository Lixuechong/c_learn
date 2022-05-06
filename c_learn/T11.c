#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 结构体与结构体指针、别名、枚举。
 */

enum CONTENT_TYPE {
    TEXT,
    IMAGE_TEXT,
    IMAGE,
    VIDEO
};

struct Cat {
    
    char name[10];
    int age;
    
};

//但是更多的是为了编译器兼容。
typedef struct Cat Cat_;//给结构体取别名

//这样可以直接获取到指针。
typedef Cat_ * Cat;//给结构体指针取别名

int main11() {
    
    //枚举
    enum CONTENT_TYPE type1 = TEXT;
    enum CONTENT_TYPE type2 = IMAGE_TEXT;
    enum CONTENT_TYPE type3 = IMAGE;
    enum CONTENT_TYPE type4 = VIDEO;
    
    printf("枚举值 %d,%d,%d,%d\n", type1,type2,type3,type4);
    
    //使用别名可以省略struct、指针的写法。
    //为了兼容VS、Clion编译器的写法，保证写法一致。
    Cat cat10 = (Cat)malloc(sizeof(Cat_));
    
    free(cat10);
    cat10 = NULL;
    
    //结构体初始化,在栈区开辟空间。
    struct Cat cat = {"橘子1", 21};
    
    //定义一个结构体指针.
    struct Cat * cat_p = &cat;
    //为结构体指针的值赋值
    strcpy(cat_p -> name, "橘子2");
    cat_p -> age = 22;
    
    printf("cat2 static name = %s, age = %d\n", cat_p -> name, cat_p -> age);
    
    //下面在堆区开辟空间
    
    struct Cat * cat3 = (struct Cat *) malloc(sizeof(struct Cat));//此处使用xcode开辟空间必须加struct,不然会异常.
    
    strcpy(cat3 -> name, "橘子3");
    cat3 -> age = 3;
    
    printf("cat3 static name = %s, age = %d\n", cat3 -> name, cat3 -> age);
    
    free(cat3);
    cat3 = NULL;
    
    //动态开辟结构体数组
    struct Cat * cat4 = (struct Cat *) malloc(sizeof(struct Cat) * 3);
    
    strcpy(cat4 -> name, "橘子4");//这是对首元素赋值
    cat4 -> age = 4;
    
    printf("cat4_1 static name = %s, age = %d, 地址 = %p\n", cat4 -> name, cat4 -> age, cat4);

    cat4 = cat4 + 1;
    
    strcpy(cat4 -> name, "橘子最后");//这是对最后一个元素赋值
    cat4 -> age = 7;
    
    printf("cat4_2 static name = %s, age = %d, 地址 = %p\n", cat4 -> name, cat4 -> age, cat4);
    
    free(cat4);//！！！！！，此处释放空间时，指针的位置必须在首位。
    cat4 = NULL;
    
    return 0;
}
