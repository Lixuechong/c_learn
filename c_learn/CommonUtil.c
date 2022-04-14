//
//  CommonUtil.c
//  c_learn
//
//  Created by lixuechong on 2022/4/14.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/**
 获取字符串的长度
 */
void length(int * count_p, char strs[]) {
    
    printf("传入参数‘strs[]’的值是%c\n", *strs);
    
    int count = 0;
    
    while(*strs) {
        strs++;
        count++;
    }
    
    *count_p = count;
    
}
