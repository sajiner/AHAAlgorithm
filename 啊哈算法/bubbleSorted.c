//
//  bubbleSorted.c
//  啊哈算法
//
//  Created by 张鑫 on 2017/12/3.
//  Copyright © 2017年 张鑫. All rights reserved.
//

#include "bubbleSorted.h"

void bubbleSorted() {
    
    int a[100], i, j, k, n;
    printf("请输入有多少个数");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
       printf("请输入第%d个数: ", i);
        scanf("%d", &a[i]);
    }
    
    for (i = 1; i <= n - 1; i++) {/// n个数，比较n-1趟
        for (j = 1; j <= n-i; j++) { /// 从第一位开始比较，直到最后一个尚未归位的数
            if (a[j] < a[j+1]) {
                k = a[j];
                a[j] = a[j+1];
                a[j+1] = k;
            }
        }
    }
    for (i = 1; i <= n; i++) {
        printf("%d ", a[i]);
    }
}


/// 现在分别有5个人的名字和分数，请按照分数从高到低，输出他们的名字
struct student {
    char name[21];
    int score;
};

void bubbleTest() {
    struct student a[100], t;
    int i, j, n;
    printf("请输入有多少个数");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
         printf("请输入第%d个数: ", i);
        scanf("%s %d", a[i].name, &a[i].score);
    }
    
    for (i = 1; i <= n-1; i++) {
        for (j = 1; j <= n-i; j++) {
            if (a[j].score < a[j+1].score) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    
    for (i = 1; i <= n; i++) {
        printf("%s ", a[i].name);
    }
}







