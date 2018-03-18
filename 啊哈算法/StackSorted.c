//
//  StackSorted.c
//  啊哈算法
//
//  Created by 张鑫 on 2018/3/14.
//  Copyright © 2018年 张鑫. All rights reserved.
//

#include "StackSorted.h"
#include <string.h>

void stack () {
    char a[101], s[101];
    int i, len, mid, next, top;
    
    gets(a);
//    strlen()函数求出的字符串长度为有效长度，既不包含字符串末尾结束符 ‘\0’；
//    sizeof()操作符求出的长度包含字符串末尾的结束符 ‘\0’；
    len = (int)strlen(a);
    mid = len / 2 - 1;
    
    top = 0;
    for (i = 0; i <= mid; i++) {
        s[top] = a[i];
        top++;
    }
    
    if (len % 2 == 0) { /// 偶数
        next = mid + 1;
    } else {
        next = mid + 2;
    }
    
    for (i = next; i < len; i++) {
        if (s[top - 1] != a[i]) {
            break;
        }
        top--;
    }
    
    if (top == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
}
