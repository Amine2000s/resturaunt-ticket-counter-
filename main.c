#include "stacck.h"

int main(void)
{
    //add(&head);
    //add(&head);
    //val(head);
    head=NULL;
    int max_dec = 0 ;
    int decision = 0 ;
    int tot_price=0;
    struct Stack *v,*c=NULL;
    welcome();

    scanf("%i",&decision);

    if(decision==1)
    {
        printf("name of the ticket owner :");
        scanf("%s",name_of_tickent_owner);
        int flag = 0 ;
        do {

            add();
            //val_of_stack(head);
            puts("add more ? 1/0");
            scanf("%d",&flag);


        } while(flag);


        printf(" [1]: calculate the max ");
        scanf("\t\t\t\t%i",&max_dec);


        if(max_dec==1)
        {
            c=head;
            v=head;
            ticket_show(c,v);

        }

            }



return 0 ;
}
