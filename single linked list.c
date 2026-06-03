//single linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*head=NULL;  //main pointer which points to first node
void creates11()
{
	struct node *temp,*ptr; //temp:storing;ptr:traversing
	temp=(struct node*)malloc(sizeof(struct node));  //allocating memory  syntax:ptr = (castType*) malloc(size_in_bytes);
	temp->next=NULL;
	printf("Enter the data in node:");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
	
}
void displaysll()
{
	struct node *ptr;
	if(head==NULL)
	{
		printf("SLL IS emplt!!");
	}
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			printf("%d->",ptr->data);
			ptr=ptr->next;
		}
		printf("NULL");
	}
}
void insert_begin()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("Enter the data in node:");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		head=temp;
		printf("Insertion successful at beginning");
	}
		else
	{
		ptr=head;
		temp->next=ptr;
		head=temp;
		printf("Insertion successful!!");
	}
}
void insert_end()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("Enter the data in node:");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		head=temp;
		printf("Insertion at end successful!!");
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
		printf("Insertion at end successful!!");
	}
}
	void delete_begin()
	{
		struct node *ptr;
		if(head==NULL)
		{
			printf("Linked list is empty");
		}
		else
		{
			ptr=head;
			head=ptr->next;
			free(ptr);
			printf("deletion at beginning successful");
		}
		
	}
	
	void delete_end()
	{
		struct node *ptr,*ptr1,*temp;
		if(head==NULL)
		{
			printf("Linked list is empty");
		}
		else
		{
			ptr=head;
		while(ptr->next->next!=NULL)
		{
			ptr=ptr->next;
			
		}
		ptr1=ptr->next;
		ptr->next=NULL;
		free(ptr1);
		//temp=ptr;
		printf("Deletion at end successful!!");
		}
	}
void insert_anypos()
{
	struct node *ptr,*temp;
	int pos,c=0;
	if(head==NULL)
	{
		printf("the linked list is empty");
	}
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			c++;
			ptr=ptr->next;
		}
	
	printf("enter the position to instert:");
	scanf("%d",&pos);
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("Enter the data in node:");
	scanf("%d",&temp->data);
	if(pos<1 || pos>c+1)
	{
		printf("invalid position");
	}
	else
	{
	ptr=head;
	if(pos==1)
	{
		temp->next=ptr;
		head=temp;
		printf("insertion at first position successful");
		}
	else
	{
		int i;
		for(i=1;i<pos-1;i++)
		{
			ptr=ptr->next;
			}
			temp->next=ptr->next;
			ptr->next=temp;	
			printf("insertion successful");
		}	
	}
}
}

void delete_anypos()
{
	struct node *ptr,*ptr1;
	int pos,c=0;
	if(head==NULL)
	{
		printf("SLL is empty");
	}
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			c++;
			ptr=ptr->next;
		}
	printf("enter position to delete:");
	scanf("%d",&pos);
	if(pos<1 || pos>c)
	{
		printf("deletion not possible");
	}
	else
	{
		ptr=head;
		if(pos==1)
		{
			ptr1=ptr->next;
			head=ptr1;
		}
		else
		{
			int i;
			for(i=1;i<pos-1;i++)
			{
				ptr=ptr->next;
			}
			ptr1=ptr->next;
			ptr->next=ptr1->next;
			free(ptr1);
		}
	}
	}
	
}
void sumofelements()
{
	int sum=0;
	struct node *ptr;
	if(head==NULL)
	{
	printf("SLL is empty");	
	}
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			sum=sum+ptr->data;
		}
	printf("Sum of nodes=%d",sum);
	}
	}
	
		int search_ele()
	{
	struct node *ptr;
	int key,count;
	printf("enter the key for searching:");
	scanf("%d",&key);
	count=0;
	ptr=head;

	while(ptr!=NULL)
	{
		if(ptr->data==key)
		{
		printf("the element %d found in node:%d",key,count+1);
		return 0;	
	}
		count++;
		ptr=ptr->next;
		
	}
	printf("key not found");
}

int main()
{
	while(1)
	{
		int ch;
		printf("\n 0.exit \n1.createsll \n2.displaysll \
		\n3.insert_begin \n4.insert_end \n5.delete_begin\n6.delete_end \n7.insert_anypos\n \
		8.delete_anypos\n9.sum_of_nodes\n10.search_ele\nEnter the choice:");
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
					creates11();
					break;
				}
				case 2:
				{
					 displaysll();
					 break;
				}
				case 3:
				{
					 insert_begin();
					 break;
				}
				case 4:
				{
					 insert_end();
					 break;
				}
				case 5:
				{
					 delete_begin();
					 break;
				}
					case 6:
				{
					 delete_end();
					 break;
				}
				case 7:
				{
					 insert_anypos();
					 break;
				}
				case 8:
				{
					 delete_anypos();
					 break;
				}
				case 9:
				{
					 sumofelements();
					 break;
				}
				case 10:
				{
					 search_ele();
					 break;
				}
				
		}
			
		}
	
	return 0;
}
