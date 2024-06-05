#include <stdio.h>
#include <conio.h>
#define max 5

 int cqueue[max];
int front=-1;
 int rear=-1;


 void insert(){
    int iteama;
    if((front==0 && rear==max-1)||(front=rear+1)){

    
        printf("queue is overflow");

    }
    else{
        if(front==-1){
            front=0;
            rear=0;
        }
        else{
            if(rear==max-1){
                rear=0;
            }
            else{
                rear=rear+1;
            }
        }
    }
    cqueue[rear]=iteama;
 }

 void deleted(){
    if (front==-1)
    {
        printf("queue is underflow");
        
    }
    else{
        printf("element deleted %d\n",cqueue[front]);
        if(front==rear){
            front=-1;
            rear=-1;
        }else{
            if(front==max-1){
                front=0;
            }
            else{
                front=front+1;
            }
        }
        
    }
    

 }

void display(){
    int front_pos=front , rear_pos=rear;

    if(front==-1){
        printf("queue is empty");
    }
    else{
        if(front_pos<=rear_pos){
            while(front<=rear_pos){
                printf("%d",cqueue[front_pos]);
                front_pos++;
            }
        }
        else{
            while(front_pos<=max-1){
                printf("%d",cqueue[front_pos]);
                front_pos++;
            }
            front_pos=0;
            while(front_pos<=rear_pos){
                printf("%d",cqueue[front_pos]);
                front_pos++;
            }
        }
        printf("\n");
    }
}
int main(){
    int a , b;

    do{
        printf("operation of cqueue\n");
        printf("1.insertion\n2.deletion\n 3.disply\n 4.exit\n");
        scanf("%d",&a);

        switch(a){
            case 1:
            printf("inpute the elemnt for insertion in queue :\n");
            scanf("%d",&b);
            insert(b);
            break;

            case 2: deleted();
            break;

            case 3: display();
            break;

            case 4: exit(0);
            break;

            default:
            printf("enter invelid choice\n");
        }
    }
    while(a!=4);
}



