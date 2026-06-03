//double linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node*next;
}*head=NULL;

void createdll()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=temp->next=NULL;
	printf("Enter the data:");
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
		temp->prev=ptr;
		ptr->next=temp;	
	}	
}
void displaydll()
{
	struct node *ptr;
	if(head==NULL)
	{
		printf("DLL is empty");
	}
	else
	{
		ptr=head;
		printf("NULL");
		while(ptr!=NULL)
		{  
		    printf("<-%d->",ptr->data);
			ptr=ptr->next;
		}
		printf("NULL");
	}	
}
void insert_begin()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=temp->next=NULL;
	printf("Enter the data:");
	scanf("%d",&temp->data);
    if(head==NULL)
	{
		head=temp;
		printf("First node in DLL scuccessful!!");
	}	
	else
	{
		ptr=head;
		temp->next=ptr;
	//	ptr->prev=temp;
		head=temp;
        printf("First node in DLL scuccessful!!");
	}
}
void insert_end()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=temp->next=NULL;
	printf("Enter the data:");
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
		temp->prev=ptr;
		ptr->next=temp;
		printf("Insertion at end successful!!");
	}
}
void delete_begin()
{
	struct node *ptr,*ptr1;
	if(head==NULL)
	{
		printf("DLL is Empty!");
	}
	else
	{
		ptr=head;
		head=ptr->next;
		ptr1=ptr->next;
		ptr1->prev=NULL;
		free(ptr);
		printf("Deletion at begin successful!!");
	}
}
void delete_end()	
{
	struct node *ptr,*ptr1;
	if(head==NULL)
	{
		printf("DLL is emlpt!!");
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr1=ptr->prev;
		ptr1->next=NULL;
		free(ptr);
		printf("Deletion at end is sucessful!!");
	}	
}	
void insert_anypos()
{
	int pos,c=0;
	struct node *temp,*ptr,*ptr1;
	if(head==NULL)
	{
		printf("DLL is empty!!");
	}
	else
	{
    ptr=head;
	while(ptr!=NULL)
	{
		c=c+1;
		ptr=ptr->next;
	}
	printf("Enter position:");
	scanf("%d",&pos);
	if(pos<1 || pos>c+1)
	{
		printf("Invalid position");
	}
	else
	{
	 ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=temp->next=NULL;
	if(pos==1)
	{
		insert_begin();
	}
	else if(pos==2 || pos<=c)
	{
		printf("Enter the data:");
	     scanf("%d",&temp->data);
		int i;
		for(i=1;i<pos-1;i++)
		{
			ptr=ptr->next;
		}
		ptr1=ptr->next;
		temp->prev=ptr;
		temp->next=ptr1;
		ptr->next=temp;
		ptr1->prev=temp;
	}
	else
	{
		insert_end();
	}
		
	}	
	}	
	
}
void deletion_anypos()
{
	int pos,c=0;
	struct node *ptr,*ptr1,*ptr2;
	if(head==NULL)
	{
		printf("DLL is empty!!");
    }
    ptr=head;
    while(ptr!=NULL)
    {
    	c=c+1;
    	ptr=ptr->next;
    	
	}
	printf("Enter position to delete:");
	scanf("%d",&pos);
    if(pos<1 || pos>c)
    {
    	printf("Invalid position");
	}    
	else
	{   
	    ptr=head;
		if(pos==1)
		{
			delete_begin();
		}
		else if(pos==2 || pos<c)
		{
			int i;
			for(i=1;i<pos-1;i++)
			{
				ptr=ptr->next;
			}
			ptr1=ptr->next;
			ptr2=ptr1->next;
			ptr->next=ptr1->next;
			ptr2->prev=ptr1->prev;
			free(ptr1);
		}
		else
		{
			delete_end();
		}
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
		printf("\n0.exit \n1.createdll \n2.displaydll \
		\n3.insert_begin \n4.insert_end \n5.delete_begin \
		\n6.delete_end\n7.insrtion_anypos \
		\n8.deletion_anypos\n9.sumofelements\n10.search_ele Enter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0:{
				exit(0);
				break;
			}
			case 1:
				{
			createdll();
				break;	
				}
			case 2:
				{
				displaydll();
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
			   deletion_anypos();
				break;
				}
			case 9:
				{
			 //  sumofelements();
				break;
				}
				case 10:
				{
			   search_ele();
				break;
				}		
				
				
		}
		
		
		
	}
	
	
}
