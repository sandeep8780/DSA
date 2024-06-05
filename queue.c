#include<stdio.h>
#include<conio.h>
#define max 5
int queue[max];
int front=0,rear=0,n;

void insert();
void deletedd();
void show();

int main(){
    int ch;
    printf("enter your arr size");
    scanf("%d",&n);

    do{
        printf("queue opration in queue");
        printf("1.insert\n 2.deleted\n 3.show\n 4.exit");
        printf("enter your choice");
        scanf("%d",&ch);

        switch(ch){
            case 1: insert();
            break;
            case 2: deletedd();
            break;
            case 3: show();
            break;
            default:
            printf("invelid choice");
            

        }
    }
    while(ch != 0);
}

void insert(){
    int itema;
    if(rear==n-1){
        printf("queue is overflow");

    }
    else{
        printf("enter your element");
        scanf("%d",&itema);

        rear++;
        queue[rear]=itema;
        printf("enter your sucessfulyy.....\n");
    }




}
void deletedd(){
    int del;
    if(front==0){
        printf("queue is empty");
    }
    else{
        del=queue[front];
        printf("your data is deletd %d\n",del);
        front++;

    }
}
void show(){
    if(front==0){
        printf("quque is empty");

    }
    else{
        printf("que is data \n");
        for(int i=rear;i>front;i--){
            printf("%d",queue[i]);
        }
    }
}