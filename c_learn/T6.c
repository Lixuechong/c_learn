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
 字符串查找、包含、拼接
 */

/**
 获取字符串的长度
 */
int length_back(char strs[]) {
    
    printf("传入参数‘strs[]’的值是%c\n", *strs);
    
    int count = 0;
    
    while(*strs) {
        strs++;
        count++;
    }
    return count;
}

/**
 字符串拼接
 */
void charJoint(char * target, char * split) {
    
    //??? 下面target++;已经移动了指针，为什么每次进入函数的时候，它都是同一个地址？
    printf("target的地址=%p\n", target);
    char * splitTemp = split;
    
//    if(*target) {
//        *target = '\0';
//    }
    
    while(*target) {
        target++;
    }
    while(*splitTemp) {
        *target = *splitTemp;
        printf("此次拼接的char=%c, 目标位置=%p\n", *splitTemp, target);
        splitTemp++;
        target++;
    }
    *target = '\0';
}

int test_main() {
    
    char * c1 = "my name is lxc.";
    char * c2 = "lxc";
    
    //字符串查询
    char * pop = strstr(c1, c2);
    
    
    if(pop) {
        //如果查找到了值，那么会把c2往后的所有字符串返回。
        printf("查到的值是%s, 包含了。\n", pop);//结果 == lxc.
    } else {
        printf("没有查到，你想查的是%s, 不包含。\n", pop);
    }
    
    //计算字符串相等的起始位置。
    long index = pop - c1;//pop指针 - c1指针，由于他们是连续的，所以可以计算。
    
    printf("%s首次出现的下标为%ld\n", c2, index);
    
    short test = 1;
    printf("测试short打印的占位%d\n", test);
    
    /**
     希望把java的字符串进行拼接
     String a = "", b = "";
     String c = a + b;
     如何在C中实现。
     */
    
    //此时假如有三个字符串
    char * a = "my name ", *b = "is ", *c = "cxl.";
    //TODO() 下面手写拼接api。
    int ac = length_back(a);
    int bc = length_back(b);
    int cc = length_back(c);
    int total_count = ac + bc + cc;
    
    char result[total_count];
    
    printf("字符串的总长度=%d\n", total_count);
    
//    result = (char *)malloc(total_count);
    
    printf("开辟的空间大小=%ld\n", sizeof(result));
    charJoint(result, a);
    charJoint(result, b);
    charJoint(result, c);
    
    printf("最终拼接的数据=%s, 地址=%p\n", result, result);
    
    return 0;
}
