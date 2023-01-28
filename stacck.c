#include "stacck.h"


 void add() {

    struct Stack *p;
    p=(struct Stack*)malloc(sizeof(struct Stack));
    p->nxt=NULL;

    printf("the name : \n");
    scanf("%s",&(p->name));
    printf("the price : \n");
    scanf("%i",&(p->price));
    printf("quantity: \n");
    scanf("%i",&(p->quantity));


    if( head==NULL ){
        head=p;
    }else{
        p->nxt=head;
        head=p;
    }

}
int val_of_stack(struct Stack *head){
    if(head!=NULL){
   printf("\t\t\t\t %s \t\t%i\t\t%i\n",(head->name),head->quantity,(head->price)*(head->quantity));
   return (head->price)*(head->quantity);
    }
};

int removeee(struct Stack *head ){
       int val = ((head)->price)*((head)->quantity) ;
       struct Stack *p ;
       p = head ;
       head=(head)->nxt;
       free(p);
       return val ;
       };



void welcome (){
printf(" \n \t \t \t \t ======================================== \n");
printf(" \n \t \t \t \twelcome to the RESTURAUNT ACCOUNTING PROGRAM!\n ");
printf(" \n \t \t \t \t  =======================================\n");
printf(" \n \n   \t \t \t \t [1] : New receipt");
printf("\n \n \n  \t \t \t \t [-1] : exit ");

}




int getTotalPrice(struct Stack *v  , int totalPrice){
  if(v == NULL)
        return totalPrice ;
  else
  {
      totalPrice += removeee(v);
     getTotalPrice(v,totalPrice);
  }
}

void ticket_show (struct Stack* c,struct Stack*v){
    struct Stack *p;
    int price =0;
    printf("\t\t\t\t Los POllos Hermanos FAST FOOD\n");
    printf("\t\t\t\t------------------------------------\n");
    printf("\t\t\t\tTICKET OWNER : %s\n",name_of_tickent_owner);
    printf("\t\t\t\t------------------------------------\n");
    printf("\t\t\t\tdate :  06 FEB 2023 @ 10:35:03\n ");
    printf("\t\t\t\t------------------------------------\n");
    printf("\t\t\t\tItems\t\tQTY\t\tTOTAL\n");
    printf("\t\t\t\t------------------------------------\n");


    while(c!=NULL){
                price+=val_of_stack(c);
                p=c;
                free(p);
                c=(c->nxt);
            };

    //printf("\n total is %i",tot_price);
    printf("\t\t\t\t------------------------------------\n");
    printf("\t\t\t\tSUB TOTAL\t\t\t%i\n",price );
    printf("\t\t\t\t\10% discount\t\t\t%i\n",price*0.1);
    printf("\t\t\t\t------------------------------------\n");
    printf("\t\t\t\tTOTAL\t\t\t%i\n",price-(price*0.1) );



}
