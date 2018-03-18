//
//  QueueSorted.c
//  啊哈算法
//
//  Created by 张鑫 on 2018/3/14.
//  Copyright © 2018年 张鑫. All rights reserved.
//

#include "QueueSorted.h"


struct queue {
    int data[101];
    int head;
    int tail;
};

void queue2() {
    struct queue q;
    q.head = 0;
    q.tail = 0;
    
    for (int i = 0; i < 9; i++) {
        scanf("%d", &q.data[q.tail]);
        q.tail++;
    }
    
    while (q.head < q.tail) {
        printf("%d ", q.data[q.head]);
        q.head++;
        
        q.data[q.tail] = q.data[q.head];
        q.tail++;
        q.head++;
    }
    return;
}

void queue (){
    int q[101] = {0, 6, 3, 1, 7, 5, 8, 9, 2, 4}, head, tail;
    
    head = 1;
    tail = 10;
    while (head < tail) {
        printf("%d ", q[head]);
        head++;
        
        q[tail] = q[head];
        tail++;
        
        head++;
    }
    return;
}
