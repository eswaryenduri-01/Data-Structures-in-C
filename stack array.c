//stack using array
#include <stdio.h>
#include <stdlib.h>
#define max 5
int stack[max],top=-1;
int push()
{
	int val;
	if(top==max-1)
	{
		printf("Stack is full overflow!!");
		}
	else
	{
		printf("enter the element:");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
		printf("%d is pushed into stack",stack[top]);
		}	
}

int pop()
{
	if(top==-1)
	{
		printf("stack is empty!underflow!!");
	}
	else{
		printf("%d is pop",stack[top]);
		top=top-1;
	}
}

int peek()
{
	if(top==-1)
	{
		printf("stack is empty!underflow!!");
	}
	else{
		printf("%d is the top element",stack[top]);
	}
}

int display()
{
	if(top==-1)
	{
		printf("stack is empty!underflow!!");
	}
	else{
		int i;
		for(i=top;i>=0;i--)
		{
			printf("%d ",stack[i]);
		}
	}
}

int isempty()
{
	if(top==-1)
	{
		printf("stack is empty!!");
	}
	else{
		printf("stack is not empty");
	}
}

int isfull()
{
	if(top==max-1)
	{
		printf("stack is full");
	}
	else{
		printf("stack is not full");
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
			case 0:
			{
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
