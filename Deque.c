 #include <stdio.h>
#include <conio.h>
#define size 5

int deque[size];
int f=-1 , r=-1;  //que is empty

void  insert_front(int x) //20
{
if((f==0) ||r==size-1)
{
printf("over flow");
}
else if((f==-1) && (r==-1))
{
f=r=0;
deque[f]=x;
}
else{
f=f-1;
//deque[f]=x;
}
}

void insert_rear(int x)
{
if((f==-1) && (r==-1)){
printf("Over flow");
}
else if((f==-1) && (r==-1)){
r=0;
deque[r]=x;
}
else{
r++;
deque[r]=x;
}
}

void display(){
int i=f;
printf("\n element dequement are");
while(i<=r){
    printf("%d",deque[i]);
    i++;

}
}
void getfront(){
    if((f==-1)&&(r==-1)){
        printf("Deque is empty");
    }
    else
    {
        printf("\n the value of the elemnet at front is %d", deque[f]);
    }
}
void getrear(){
    if ((f==-1) && (r==-1)){
        printf("deque is empty");
    }else{
        printf("\n the value of the elment at rear",deque[r]);
    }
}
void delete_front(){
    if((f==-1)&& (r==-1))
    {
        printf("\n deque is empty");
    }
    else if(f==r){
        printf("\n The deleted element is %d",deque[f]);
        f=-1;
        r=-1;
    }
    else {
        printf("\n The delete elemnt is %d",deque[f]);
        f=f+1;
    }
}
void delete_rear(){
    if ((f==-1)&& (r==-1)){
        printf("Deque is empty");

    }else if(f==r){
        printf("\n The delete element is %d",deque[r]);
        f=-1;
        r=-1;
    }
    else {
        printf("\n The delete element is %d",deque[r]);
    }
}
void main(){
    insert_front(10);
     insert_front(20);
     insert_rear(30);
     insert_rear(50);


     display();
     getfront();
     getrear();
     delete_front();
     delete_rear();
     display();

}