//
//  T9.c
//  c_learn
//
//  Created by lixuechong on 2022/4/14.
//

#include <stdio.h>

int main9() {
    
//    char a = 'a';//而char是基础数据类型，并不会在创建a指针时，只会在栈区中创建a，所以a指针允许被修改。
//    char * b;// 30
//
//
//    b = &a;
//
//    printf("a=%p,b=%p, av=%c, bv=%c\n", &a, b, a, *b);
//
        //  此处允许修改b指针的值，而b指针指向a指针，所以a指针也会被修改。
//    *b = 'b';//200
//
//
//    printf("a=%p,b=%p, av=%c, bv=%c\n", &a, b, a, *b);
//    return 0;
//
    
    char * a = "a";//这里的a指针其实是 "a"。
    char * b;//此时b是野指针。
    
    b = a;//这里让b指针指向'a'。
    
    printf("a=%p,b=%p, av=%s, bv=%s\n", a, b, a, b);
    
    //注意：这里不允许修改b指针的值。因为此时b指针指向全局区中的“a”，而全局区中的值不允许修改。
//    *b = "b";//这句话会报异常。

    //如果想修改b指针的值，只能让b重新指向新的地址.
    b = "b";
    
    printf("a=%p,b=%p, av=%s, bv=%s\n", a, b, a, b);
    
    return 0;
}
