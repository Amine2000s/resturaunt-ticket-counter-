#ifndef STACCK_H_
#define STACCK_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 typedef struct Stack {

    char name [40];
    int price ;
    int quantity;
    struct Stack* nxt ;
};


struct Stack  *head  ;
char name_of_tickent_owner[30];





void add();

int val_of_stack( struct Stack  *head);
int removee(struct Stack *head);
void welcome();
void showw();
int getTotalPrice(struct Stack *v  , int totalPrice);
void ticket_show(struct Stack*c,struct Stack *v);

#endif // STACCK_H_
