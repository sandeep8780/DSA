#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int stack[5];
int n,top=-1;
void push();
void pop();
void show();

int main(){
    int choice;
    printf("enter your arr size\n");
    scanf("%d",&n);

    do{
        printf("\n operation by stack");
        printf("\n1.push\n 2.pop\n 3.show\n 4.eixt");
        printf("\nenter your choice\n");
        scanf("\n %d",&choice);

        switch(choice){
            case 1:push();
            break;
            case 2: pop();
            break;
            case 3: show();
            break ;
            case 4: exit;
            break;
            default:
            printf("\n enter your velid choice");
        }
    }
    while(choice!=0);
    }


void push(){
    int A;
    if(top==n-1){
        printf("stack is overflow");

    }
    else{
        printf("enter insert your elemnt");
        scanf("%d",&A);
        top++;
        stack[top]=A;
        printf("enter youer sucessfully.....");
    }
}
void pop(){


    if(top==-1){
        printf("stack is underflow");
    }
    else{
         n=stack[top];
        top--;
        printf("\nyour elemnet is pop...");
        

    }
    }

    void show(){
        if(top==-1){
            printf("stcak is empty");

        }else{
            printf("present ib stack element");
            for(int i=top;i>0;i--){
                printf("%d",stack[i]);

            }
        }
    }



/*
 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int n , stack[5];
int top=-1;
void push();
void pop();
void show();


int main(){
    int choice;
    printf("eneter your arr size\n");
    scanf("%d",&n);
    do{
        printf("opertaion by stack\n");
        printf("1.push\n 2.pop\n 3.show\n 4.exit\n");
        printf("enter your choice\n");
        scanf("\n%d",&choice);
    
    switch(choice){
        case 1: push();
        break;
        case 2: pop();
        break;
        case 3: show();
        break;
        case 4: exit;
        default:
        printf("\nenter invelid choice....");
}
    }
while(choice!=0);
}
void push(){
    int f;
    if(top==n-1){
        printf("\nstack is overflow....");
    }else{
        printf("\ninsert the  element...");
        scanf("%d",&f);
        top++;
        stack[top]=f;
        printf("\nenter your elemnet successfully....");

            }
}
void pop(){
    if(top==-1){
        printf("\n stack is underflow");

    }else{
       n=stack[top];
       top--;
       printf("\npop the elemnet....");
      
    
}
}

void show() {
    if(top==-1){
        printf("\nstack is empty");
    }else{
        printf("elemnt prent is stack");
        for(int i=top;i>=0;i--){
            printf("\n%d",stack[i]);
        }
        }
    }

*/