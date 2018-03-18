//
//  bucketSorted.c
//  算法之插入排序
//
//  Created by 张鑫 on 2017/12/1.
//  Copyright © 2017年 张鑫. All rights reserved.
//

#include "bucketSorted.h"

void bucketSorted() {
    int book[1001], i, j, t, n;
    for (i = 0; i <= 1000; i++)
        book[i] = 0;
    printf("请输入一共有几个数: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        printf("请输入第%d个数: ", i);
        scanf("%d", &t);
        book[t]++;
    }
    
    for (i = 1000; i >= 0; i--) {
        for (j = 1; j <= book[i]; j++) {
            printf("倒序排列结果为: %d ", i);
        }
    }
}
