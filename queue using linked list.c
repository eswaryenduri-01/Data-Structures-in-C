//wap to implement queue using Linkedlist.
#include<stdio.h>
#include<stdlib.h>
#define max 5
int size=0;
struct queue
{
	int data;
	struct queue *next;
};
struct queue *r=NULL;
struct queue *f=NULL;

void enqueue()
{
    struct queue *temp;
    temp = (struct queue*)malloc(sizeof(struct queue));

    printf("Enter the data:");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if(size == max)
    {
        printf("Queue is full Overflow!!");
    }
    else if(f == NULL && r == NULL)
    {
        f = r = temp;   // ? no self-loop
        size++;
        printf("First element inserted");
    }
    else
    {
        r->next = temp; // ? link first
        r = temp;       // ? then move rear
        size++;
        printf("Element inserted succssful!!");
    }
}
void dequeue()
{
	if(f==NULL && r==NULL)
	{
		printf("Queue is empty Underflow!!");
	}
	else if(f==r)
	{
		printf("%d is dequeued",f->data);
		f=r=NULL;
		printf("queue is empty");
		
	}
	else
	{
		
		printf("%d is dequed",f->data);
		f=f->next;
	}
}
void peek()
{
if(f==NULL && r==NULL)
	{
		printf("Queue is empty Underflow!!");
	}
	
	else
	{
		
		printf("%d is peek element",f->data);
		
	}		
}
void display()
{
	struct queue *ptr;
	if(f==NULL && r==NULL)
	{
		printf("Queue is empty Underflow!!");
	}
	
	else
	{
	ptr=f;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
}

void isempty()
{
	if(f==NULL && r==NULL)
	{
		printf("queue is empty");
	}
	else
	{
		printf("queue is not empty");
	}
}
void isfull()
{
	if(size==max)
	{
		printf("queue is full");
	}
	else
	{
		printf("queue is not full");
	}
}
int main()
{
	
	while(1){
		int ch;
		printf("\n0.exit \n1.Enqueue \n2.dequeue \n3.peek\n4.display\n5.isempty\n6.isfull \
		 \nEnter your choice:");
		 scanf("%d",&ch);
		 switch(ch)
		 {
		 	case 0:{
		 		exit(0);
				break;
			 }
			case 1:{
		   		enqueue();
				break;
			 }
		 	case 2:{
		   		dequeue();
				break;
			 }
		 	case 3:{
		 		peek();
				break;
			 }
		 	case 4:{
	      		display();
				break;
			 }
			case 5:{
		  		isempty();
				break;
			 }
		 	case 6:{
				isfull();
				break;
			 }
			default:printf("wrong choice enetered!!");
		 }
			
	}
}
