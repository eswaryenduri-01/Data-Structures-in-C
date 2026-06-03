#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max],f=-1,r=-1;
void enqueue()
{
   int val;
   printf("Enter the value:");
   scanf("%d",&val);
   if(f==(r+1) % max)
   {
      printf(" circular queue is full overflow!");
   }
  else if(f==-1 && r==-1)
  {
      f=r=0;
      queue[r]=val;
      printf("\nfirst element enqued in Cqueue successful!!");
  }
  else
  {   
      r=(r+1) % max;
      queue[r]=val;
      printf("\n element enqued in Cqueue successful!!");
  }
}
void dequeue()
{
     if(f==-1 && r==-1)
     {
         printf("Circular queue is empty underflow!!");
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
         printf("circular queue is empty underflow!!");
     }
     else 
     {
          printf("%d is peek",queue[r]);
     } 
}
void display()
{  
     if(f==-1 && r==-1)
     {
         printf("circular queue is empty!!");
     } 
     else
     {
         int i;
         for(i=f;i<=r;i++)
         {
              printf("%d\n",queue[i]);
         }
     }
}
void isempty()
{
    if(f==-1 && r==-1)
     {
         printf("circular queue is empty underflow!!");
     }
     else
     {
          printf("circular queue is not empty");
     }
}
void isfull()
{
    if(r==max-1)
   {
      printf("circular queue is full overflow!");
   }
   else
   {
      printf("circular queue is not full");  
    }
}
int main()
{
   while(1)
  { 
      int ch;
      printf("0.exit\n1.enqueue\n2.dequeue\n3.peek\n4.display\n5.is empty\n6.is full\nEnter your choice:");
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
       default:
      {  
           printf("wrong chocie");
          break;
      }
      }

  } 
}
