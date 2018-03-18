//
//  chainSorted.c
//  啊哈算法
//
//  Created by 张鑫 on 2018/3/17.
//  Copyright © 2018年 张鑫. All rights reserved.
//

#include "chainSorted.h"
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void chainSorted() {
    
    struct node *head, *q, *p, *t;
    int i, n, a;
    
    scanf("%d", &n);
    
    head = NULL;
    q = NULL;
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        p = (struct node *)malloc(sizeof(struct node *));
        p->data = a;
        p->next = NULL;
        
        if (head == NULL) {
            head = p;
        } else {
            q->next = p;
        }
        q = p;
    }
    
    t = head;
    while (t != NULL) {
        printf("%d ", t->data);
        t = t->next;
    }
}
