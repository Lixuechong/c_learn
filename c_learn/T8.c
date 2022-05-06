#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 字符串截取
 */

char * strCut(char * target, char * origin, int firstIndex, int lastIndex) {
    
    int length = lastIndex - firstIndex;
    
    target = malloc(length + 1);
    
    char * temp = origin;
    
    if(target == NULL) {
        return NULL;
    }
    
    int current_index = 0;
    while(*temp) {
        if(firstIndex <= current_index && current_index <= lastIndex) {
            *target = *temp;
//            printf("存储的值=%c,地址=%p\n", *target, target);
            target++;
        }
        
        current_index++;
        temp++;
    }
    
    *target = '\0';
    //??? 上面开辟的target如何回收？
    
//    target = target - length - 1;
    
    printf("存储的值=%s,地址=%p,长度=%d\n", target, target, sizeof(target));
    
    return target;
}


//老师讲解，第一版
//??? target并没有为它分配空间，为什么可以赋值呢？在xcode中是报错的。

void substrAction1(char * target, char * str, int start, int end) {
    char * temp = str;
    
    int count = 0;//记录当前的位置
    while(*temp) {
        //从start的位置到end的位置.
        if(count >= start && count < end) {
            *target = *temp;
            
            target++;
        }
        temp++;
        count++;
    }
}

//老师讲解，第二版
/**
 此处target是二级指针，指针本身的指针.
 */
void substrAction2(char ** target, char * str, int start, int end) {
    
    char * temp = str;
    
    char resultArr[end - start];
    int count = 0;
    for (int i = start; i < end; i++) {
        resultArr[count] = *(temp + i);
    }
    
    //由于resultArr开辟的栈空间，所以在函数结束的时候，会被回收。所以*target为’‘。
    *target = resultArr;//把resultArr的首元素指针赋值给target自身的指针。
    
    
}
    

int main8() {
    
    char * d = "my name is ddddddd";
    
    char * result;
    
//    strCut(result, d, 3, 6);
//
//    printf("截取的值=%s,地址=%p\n", result, result);
//
//    if(result) {
//        free(result);
//        result = NULL;
//    }
    
    substrAction2(&result, d, 3, 6);
    
    printf("截取的值=%s,地址=%p\n", result, result);
    
    return 0;
}
