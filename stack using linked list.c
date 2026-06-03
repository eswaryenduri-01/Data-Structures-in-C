//stack using linked list
#include <stdio.h>
#include <stdlib.h>
#define max 5
int size=0;
struct stack{
	int data;
	struct stack *next;
}*top=NULL;

int push()
{
	if(max==size)
	{
		printf("stack is full!!overflow");
	}
	else
	{
	struct stack *temp;
	temp=(struct stack*)malloc(sizeof(struct stack));
	printf("enter the data:");
	scanf("%d",&temp->data);
	temp->next=top;
	top=temp;
	size++;
	printf("%d is pushed",top->data);	
	}
}
int pop()
{
	if(top==NULL && size==0)
	{
		printf("stack is empty underflow!");
	}
	else
	{
		printf("%d is popped",top->data);
		top=top->next;
		size--;
		
	}
}

int peek()
{
	if(top==NULL && size==0)
	{
		printf("stack is empty underflow!");
	}
	else
	{
		printf("%d is peek element",top->data);
		
	}	
}

int display()
{
	if(top==NULL && size==0)
	{
		printf("stack is empty underflow!");
	}
	else
	{
		while(top!=NULL)
		{
			printf("%d ",top->data);
			top=top->next;
		}	
	}	
}
int isempty()
{
	if(top==NULL)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("Stack is not empty");
	}
}

int isfull()
{
	if(max==size)
	{
		printf("Stack is full");
	}
	else
	{
		printf("Stack is not full");
	}
}
int main()
{
	
	while(1)
	{
		int ch;
		printf("\n0.exit\n1.push \n2.pop \n3.peek \
		\n4.display \n5.isempty \n6.isfull\nEnter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0:{
				exit(0);
				break;
			}
			case 1:
				{
				push();
					break;
				}
			case 2:
				{
					 pop();
					 break;
				}
			case 3:
				{
					peek();
					 break;
				}
			case 4:
				{
				display();
					 break;
				}
				case 5:
				{
				isempty();
					 break;
				}
					case 6:
				{
					isfull();
					 break;
				}
			default:printf("enter correct choice");	
				
		}
			
		}
	
	return 0;
}
