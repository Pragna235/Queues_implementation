#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};


struct node *front, *rear=0;

void enqueue(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;

    if(front==0 && rear==0)
    {
        printf("Queue is Empty!");
        front = rear =newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void dequeue()
{
    struct node*temp=front;
    if(front==0 && rear==0)
    {
        printf("Queue is Empty!");
    }
    else if( front==rear)
    {
        front=rear=0;
        free(temp);
    }
    else
    {
        temp=front;
        front=front->next;
        free(temp);
    }
}

void display()
{
    struct node*temp;
    if(front==0 && rear==0)
        printf("Queue is Empty!");
    else
    {
        temp=front;
        while(temp!=0)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}

void peek()
{
    if(front==0 && rear==0)
        printf("Queue is Empty!");
    else
    {
        printf("%d",front->data);
    }
}

void main()
{
    enqueue(15);
    enqueue(1);
    enqueue(-3);
    display();
    dequeue();
    peek();
}
