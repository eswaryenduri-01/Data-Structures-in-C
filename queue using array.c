//queue using array
#include <stdio.h>
#include <stdlib.h>
#define max 5
int queue[max],f=-1,r=-1;

void enqueue()
{
	int val;
	printf("enter the data to queue:");
	scanf("%d",&val);
	if(r==max-1)
	{
		printf("queue is full overflow!");
	}
	else if(f==-1 && r==-1)
	{
		f=r=0;
		queue[r]=val;
		printf("first element enqued in queue successful");
	}
	else
	{
		r++;
		queue[r]=val;
		printf("element enqued in queue successful");
	}
}
void dequeue()
{
	if(f==-1 && r==-1)
	{
		printf("queue is empty underflow");
	}
	else if(f==r)
	{
		printf("%d is dequed",queue[f]);
		f=r=-1;
	}
	else
	{
		printf("%d is dequed",queue[f]);
		f++;
	}
}

void peek()
{
	if(f==-1 && r==-1)
	{
		printf("queue is empty underflow");
	}
	else
	{
		printf("%d is peek element",queue[f]);
	}
}

void display()
{
	if(f==-1 && r==-1)
	{
		printf("queue is empty underflow");
	}
	else
	{
		int i;
	for(i=f;i<r+1;i++)
	{
		printf("%d ",queue[i]);
		}	
	}
}

void isempty()
{
	if(f==-1 && r==-1)
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
	if(r==max-1)
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
	
	while(1)
	{
		int ch;
		printf("\n0.exit\n1.enqueue \n2.dequeue \n3.peek \
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
				enqueue();
					break;
				}
			case 2:
				{
					 dequeue();
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
