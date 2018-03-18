//
//  main.c
//  啊哈算法
//
//  Created by 张鑫 on 2017/11/30.
//  Copyright © 2017年 张鑫. All rights reserved.
//

#include <stdio.h>
#include "bucketSorted.h"
#include "bubbleSorted.h"
#include "quickSort.h"
#include "QueueSorted.h"
#include "StackSorted.h"
#include "chainSorted.h"


int main(int argc, const char * argv[]) {
    chainSorted();
    
//    stack();
    
//    queue2();
    
//    bucketSorted();
    
//    bubbleSorted();
//    bubbleTest();
//
    getchar();getchar();
//    test2();
    
    return 0;
}


void test0() {
    int a[11], i, j, t;
    for (i = 0; i <= 10; i++)
        a[i] = 0;
    
    for (i = 1; i <= 5; i++) {
        scanf("%d", &t);
        a[t]++;
    }
    
    for (i = 10; i >= 0; i--) {
        for (j = 1; j <= a[i]; j++) {
            printf("%d ", i);
        }
    }
}

void test1() {
    int book[1001], i, j, t, n;
    for (i = 0; i <= 1000; i++)
        book[i] = 0;
    
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &t);
        book[t]++;
    }
    
    for (i = 0; i <= 1000; i++) {
        for (j = 1; j <= book[i]; j++) {
            printf("%d ", i);
        }
    }
}
