//
//  T7.c
//  c_learn
//
//  Created by lixuechong on 2022/4/14.
//

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 大写转小写
 */

void to_lower(char * target, char * string) {
    
    char * temp_string = string;
    printf("函数的指针%p\n", &string);
    
    while(*temp_string) {
        *target = tolower(*temp_string);
        temp_string++;
        target++;
    }
    *target = '\0';
}

int mainT7() {
    
    char * string = "LLLLccccLLLL";
    
    printf("main的指针%p\n", &string);
    
    //这里的长度不一定非要和目标的长度一致，可以适当的开辟多一些的空间。
    char * target = malloc(14);
    printf("变换之前的指针%p\n", target);
    
    if(target) {
        to_lower(target, string);
        printf("转换的结果=%s\n", target);
    }
    printf("变换之后的指针%p\n", target);
    
    if(target) {
        free(target);
        target = NULL;
    }
    
    return 0;
}
