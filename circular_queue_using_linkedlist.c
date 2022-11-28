#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node *front=0, *rear=0;

void enqueue(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(rear==0 && front==0)
    {
        front=rear=newnode;
        rear->next=front;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
        newnode->next=front;
    }
}

void dequeue()
{
    struct node*temp;
    temp=front;
    if(rear==0 && front==0)
    {
        printf("Queue is Empty");}
    else if(front==rear)
        {
            front=rear=0;
            free(temp);
        }
    else
        {
            front=front->next;
            rear->next=front;
            free(temp);
        }
    }


void display()
{
     struct node *temp;
     temp=front;
        if(rear==0 && front==0)
    {
        printf("Queue is Empty");}
        else
        {

           do
           {
               printf("%d\t",temp->data);
               temp=temp->next;
           }while(temp!=front);
        }
        printf("\n");


       // printf("\nfront = %d, rear = %d",front,rear);
}

void peek()
{
        if(rear==0 && front==0)
    {
        printf("Queue is Empty");}
        else
        {
            printf("%d",front->data);
        }
}


void main()
{
    enqueue(22);
    enqueue(14);
    enqueue(67);
    display();
    dequeue();
    display();
    peek();
}
