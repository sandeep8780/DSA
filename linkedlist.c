#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *address;
};
struct node *strat=NULL,*tempr,*new1,*next,*per;//_insert of middle



void created(){
    int n;
    char ch;
    printf("enter youer number\n");
    scanf("%d",&n);

   strat=(struct node*)(malloc(sizeof(struct node)));
   strat->data=n;
   strat->address= NULL;
   tempr=strat;

   printf("do you want continue\n");
   ch= getche();
   while(ch=='y'||ch=='Y'){
    printf("enter your element number\n");
    scanf("%d",&n);


new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=n;
new1->address=NULL;

tempr->address=new1;
tempr=tempr->address;
printf("wnat you continue");
ch= getche();

   }
}


void insert_first(){
    int n ;
    if(strat==NULL){
        printf("linkd list is empty");


    }
    else{
        printf("enter youer elemnet in first\n");
        scanf("%d",&n);

    new1=(struct node*)(malloc(sizeof(struct node)));
        new1->data=n;
        new1->address=NULL;
        strat=new1;

    
    }
}



void insert_middel(){
    int n,pos,i=1;
    if(strat==NULL){
        printf("linked is empty");

    }
    else{
        printf("enter your element");
        scanf("%d",&n);

        new1= (struct node*)(malloc(sizeof(struct node)));

new1->data=n;
new1->address=NULL;

printf("enter your position");
scanf("%d",&pos);
next=strat;

while(i<pos){
    per=next;
    next=next->address;
    i++;
}
per->address=new1;
new1->address=next;
    }
    }
    



void insert_last(){
    int n;
    if(strat==NULL){
        printf("linked is empty");

    }
    else{
        printf("enter your elment in last");
        scanf("%d",&n);

        new1= (struct node*)(malloc(sizeof(struct node)));

        new1->data=n;
        new1->address=NULL;

        tempr=strat;

        while(tempr->address != NULL){
            tempr=tempr->address;


        }
        tempr->address=new1;
    }

}

    
    void deletion_first(){
        if(strat==NULL){
            printf("linked is not found");
        }
        else{
            tempr=strat;
            strat=strat->address;
            printf("delete this node value",tempr->data);
            free(tempr);
        }
    }



    void deletion_middel(){
        int pos ,i=1;
        if(strat==NULL){
            printf("list not found");
        }
        else{
            printf("enter the position\n");
            scanf("%d",&pos);

            tempr=strat;

            while(i<pos){
                per=tempr;
                tempr=tempr->address;
                i++;
            }
            next=tempr->address;
            per->address=next;
            printf("delete is node %d",tempr->data);
            free(tempr);
        }
        
    }


    void deletion_last(){
        if(strat==NULL){
            printf("linkd list not found");
        }
        else{
            tempr=strat;
            while(tempr->address==NULL){
                tempr=per;
                tempr=tempr->address;

            }
            printf("delete is node %d",tempr->data);
            free(tempr);
        }
    }


    int display(){
    if(strat==NULL){
        printf("linklist is empty");

    }
    else{
        tempr=strat;
        while(tempr != NULL){
        printf("\n %d",tempr->data);
        tempr=tempr->address;
    

    }
    }
    }


int main(){
    int zz;

do{

printf("opreation by linkedlist\n");
printf("\n [1].created\n [2].insert_first\n[3].insert_middel \n[4]insert_last\n [5]. deletion_first\n [6] deletion_middel\n [7] deletion_last\n[8]display\n");
printf("enter your choice");
scanf("%d",&zz);

switch(zz){
case 1: created();
break;
case 2:insert_first();
break;
case 3:insert_middel();
break;
case 4:insert_last();
break;
case 5: deletion_first();
break;
case 6: deletion_middel();
break;
case 7: deletion_last();
break;
case 8: display();
break;
default:
printf("invelid number");
break;

}

}
while(zz!=0);
}