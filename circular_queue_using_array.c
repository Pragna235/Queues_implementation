#include<stdio.h>
#define N 5
int queue[N];
int front=-1, rear=-1;
void enqueue(int x)
{
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else if((rear+1)%N==front)
    printf("Queue is full!");
    else
    {
        rear=(rear+1)%N;
        queue[rear]=x;
    }
}

void dequeue()
{
    if(front==-1 && rear==-1)
        printf("Queue is Empty");
    else if(front==rear)
        front=rear=-1;
    else
    {
        //printf("%d",queue[front]);
        front=(front+1)%N;
    }
}

void display()
{
    int i=front;
    if(front==-1 && rear==-1)
        printf("Queue is Empty");
    else
    {
        while(i!=rear)
        {

            printf("%d\t",queue[i]);
            i=(i+1)%N;
        }
        printf("%d",queue[rear]);
    }
    printf("\nfront = %d, rear = %d\n",front, rear);

}

void peek()
{
    if(front==-1 && rear==-1)
        printf("Queue is Empty");
    else
        printf("%d",queue[front]);
}


void main()
{
    enqueue(22);
    enqueue(15);
    enqueue(41);
    display();
    dequeue();
    dequeue();
    display();
    enqueue(32);
    display();
    peek();
}
