#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


struct node{
    struct node *rightadd;
    int data;
    struct node *leftadd;
};
struct node *strat =NULL,*tempr,*new1,*next,*per;
void created(){
    int n;
    char ch;
    printf("enter youer number\n");
    scanf("%d",&n);

   strat=(struct node*)(malloc(sizeof(struct node)));
   strat->rightadd=NULL;
   strat->data=n;
   strat->leftadd= NULL;

   tempr=strat;

   printf("do you want continue\n");
   ch=getchar();
   while(ch=='y'||ch=='Y'){
    printf("enter your number\n");
    scanf("%d",&n);


new1=(struct node*)(malloc(sizeof(struct node)));


new1->rightadd=NULL;
new1->data=n;
new1->leftadd=NULL;

new1->leftadd=tempr;
tempr->rightadd=new1;


printf("wnat you continue");
getchar();
ch=getchar();

   }
}



void insert_first(){
    int n ;
    if(strat==NULL){
        printf("doubly linkd list is empty\n");


    }
    else{
        printf("enter youer elemnet in first\n");
        scanf("%d",&n);

    new1=(struct node*)(malloc(sizeof(struct node)));

        new1->rightadd=NULL;
        new1->data=n;
        new1->leftadd=NULL;

       tempr->leftadd=new1;
         // tempr->rightadd=new1;
       new1->rightadd=tempr;
       //new1->leftadd=tempr;  --> insert last


        new1=tempr;
        
    }
}


void insert_middel(){
    int n,pos,i=1;
    if(strat==NULL){
        printf("doubly linked is empty");

    }
    else{
        printf("enter your element");
        scanf("%d",&n);

        new1= (struct node*)(malloc(sizeof(struct node)));
new1->rightadd=NULL;
new1->data=n;
new1->leftadd=NULL;

printf("enter your position");
scanf("%d",&pos);

next=strat; // use of loop
while(i<pos){
    per=next;
    next=next->rightadd;    
    i++;
}
per->rightadd=new1;
new1->leftadd=per;

next->leftadd=new1;
new1->rightadd=next;
}
  }
    

void insert_last(){
    int n;
    if(strat==NULL){
        printf("doubly linkedlist is empty");

    }
    else{
        printf("enter your elment in last");
        scanf("%d",&n);

        new1= (struct node*)(malloc(sizeof(struct node)));

    new1->rightadd=NULL;
        new1->data=n;
        new1->leftadd=NULL;

        tempr=strat;

        while(tempr->rightadd != NULL){
            tempr=tempr->rightadd;


        }
        tempr->rightadd=new1;
        new1->leftadd=tempr;
    }

}

void deletion_first(){
        if(strat==NULL){
            printf("linked is not found");
        }
        else{
            tempr=strat;
            strat=strat->rightadd;
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
                tempr=tempr->rightadd;
                i++;
            }
            next=tempr->rightadd;
            per->rightadd=next;
            next->leftadd=per;
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
            while(tempr->rightadd==NULL){
                tempr=per;
                tempr=tempr->rightadd;

            }
            printf("delete is node %d",tempr->data);
            free(tempr);
            per->rightadd = NULL;
        }
    }
void reverse_traves(){
    if(strat==NULL){
        printf("\n list of not found");

    }else{
        tempr=strat;
        while(tempr->rightadd=NULL){
            tempr=tempr->rightadd;

        }
        while(tempr!=NULL){
            printf("%d",tempr->data);
            tempr=tempr->leftadd;
        }
    }

}

void display(){
    if(strat==NULL){
        printf("list of not found");

    }
    else{
        tempr=strat;
        while(tempr!=NULL){
             printf("%d",tempr->data);
        //    printf("%d",tempr->data);
            tempr=tempr->rightadd;
           //  tempr++;
          //  break;
        }
         printf("\n");
    }
}


int main(){
    int zz;

do{

printf("opreation by linkedlist\n");
printf("\n [1].created\n [2].insert_first\n[3].insert_middel \n[4]insert_last\n [5]. deletion_first\n [6] deletion_middel\n [7] deletion_last\n[8]display\n");
printf("\nenter your choice");
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

return 0;
}

