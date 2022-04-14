//
//  main.c
//  c_learn
//
//  Created by lixuechong on 2022/4/14.
//

#include "CommonUtil.c"


/**
 在C中，如果把数组当做参数传递，会被优化成指针（第一个元素）。
 */
int length2(char strs[], char * strsP) {
    
    //这种方式获取长度是错误的，strs数组被当做参数传递，被优化成指针（为了高效率）
//    int l = (sizeof(strs) / sizeof(char)) - 1;
    
    int l = length_back(strsP);
    return l;
}

/**
 C语言的结果回调思想
 此处的count_p是用来返回数组长度的结果参数.
 */
void length3(int * count_p, char strs[]) {
    
    printf("传入参数‘strs[]’的值是%c\n", *strs);
    
    int count = 0;
    
    while(*strs) {
        strs++;
        count++;
    }
    
    *count_p = count;
    
}

int mainT3(int argc, const char * argv[]) {
    
    char string[] = {'A', 'B', 'C', '\0'};
    
    int l = length_back(string);//此处的string本身就是指针，数组中的第一个元素的指针。
    printf("长度是%d\n", l);
    
    //除此之外，还有其他的计算数组长度的方式.
    int l2 = sizeof string / sizeof(char) - 1;//减去最后的'\0'。
    printf("长度2是%d\n", l2);

    //此时这种方式获取长度是无效的。
    int l3 = length2(string, string);
    printf("长度3是%d\n", l3);
    
    //C语言结果回调的思想，获取数组长度.
    int l4 = 0;
    length3(&l4, string);
    printf("长度4是%d\n", l4);
    
    return 0;
}
