#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x){
    if(front==N-1){
        printf("Stack is full");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}
void dequeue(){
if(front==-1 && rear==-1){
    printf("Queue is empty");
}
else if (front==rear){
    front=rear=-1;
}
else{
    //printf("%d\t",queue[front]);
    front++;
}}
void display(){
if(front==-1 && rear==-1){
    printf("Queue is empty");
}
else {
    for(int i=front;i<=rear;i++){
        printf("%d\t",queue[i]);
    }
    printf("\n");
}
}
void peek(){
if(front==-1 && rear==-1){
    printf("queue is empty");
}
else{
    printf("%d\t",queue[front]);
}
}
int main(){
enqueue(5);
enqueue(2);
enqueue(8);
enqueue(-3);
display();
dequeue();
display();
dequeue();
peek();

}
