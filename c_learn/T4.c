//
//  T4.c
//  c_learn
//
//  Created by lixuechong on 2022/4/14.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 字符串类型转换
 */

int main_t4(int argc, const char * argv[]) {
    
    char * num = "1";
    
    int result = atoi(num);
    
    if(result) {//如果是0，则转换失败。
        printf("转换的结果为%d\n", result);
    }
    
    num = "21.34dak";
    
    result = atoi(num);//这里的转换结果会把开头的数字截取，后面的丢弃.
    
    if(result) {//如果是0，则转换失败。
        printf("转换的结果为%d\n", result);
    }
    
    num = "dsf21.34dak";
    
    result = atoi(num);//这里会转换失败。
    
    printf("转换的结果为%d\n", result);
    
    num = "23.4222";
    
    double resultD = atof(num);//num整个串不是数字，那么就会转换失败。
    
    if(resultD) {//如果是0，则转换失败。
        printf("转换的结果为%lf\n", resultD);
    }
    
    return 0;
}
