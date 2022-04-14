//
//  T5.c
//  c_learn
//
//  Created by lixuechong on 2022/4/14.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 字符串比较
 */

int main_t5(int argc, const char * argv[]) {
    
    char * c1 = "Lxc";
    char * c2 = "lxc";
    
    int is_equal = strcmp(c1, c2);//strcmp函数区分大小写.
//    strcmpi函数是不区分大小写，为什么没有呢？
    
    if(is_equal) {//此处如果为0，表示相等；非0，表示不相等。
        printf("字符串不相等");
    } else {
        printf("字符串相等");
    }
    
    return 0;
}
