//
//  quickSort.c
//  啊哈算法
//
//  Created by 张鑫 on 2018/3/6.
//  Copyright © 2018年 张鑫. All rights reserved.
//

#include "quickSort.h"

 int a[101], n;
void quickSort (int left, int right) {
    
    int i, j, t, temp;
    
    if (left > right) {
#warning 此处会执行 n+1 次
        printf("come here");
        return;
    }
    i = left;
    j = right;
    temp = a[left];
    
    while (i != j) {
        while (a[j] >= temp && j > i) {
            j--;
        }
        
        while (a[i] <= temp && j > i) {
            i++;
        }
        
        if (i < j) {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    
    a[left] = a[i];
    a[i] = temp;
    
    quickSort(left, i - 1);
    quickSort(i + 1, right);
    
    return;
}

void test2() {
    int i;
    printf("请输入一共有几个数: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("请输入第%d个数: ", i);
        scanf("%d", &a[i]);
    }
    quickSort(1, n);
    
    for (i = 1; i <= n; i++) {
        printf("%d", a[i]);
    }
    
    getchar();getchar();
    return;
}
