#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 字符串截取
 */

char * strCut(char * origin, int firstIndex, int lastIndex) {
    
    int length = lastIndex - firstIndex;
    
    char * target = malloc(length + 10);
    
    char * temp = origin;
    
    if(target == NULL) {
        return NULL;
    }
    
    *target = '\0';
    
    int current_index = 0;
    while(*temp) {
        if(firstIndex <= current_index && current_index <= lastIndex) {
            target++;
            *target = *temp;
            printf("存储的值=%c,地址=%p\n", *target, target);
        }
        
        current_index++;
        temp++;
    }
    
    target++;
    *target = '\0';
    //??? 上面开辟的target如何回收？
    
    target = target - length - 1;
    
    printf("存储的值=%s,地址=%p\n", target, target);
    
    return target;
}

int main() {
    
    char * d = "my name is ddddddd";
    
    char * target = strCut(d, 3, 6);
    
    printf("截取的值=%s,地址=%p\n", target, target);
    
    if(target) {
        free(target);
        target = NULL;
    }
    
    return 0;
}
