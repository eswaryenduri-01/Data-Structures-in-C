//write a program for sturcture and function
#include <stdio.h>
#include <string.h>

struct student
{
	int m,p,c;
	int total;
	float avg;
	
};
void display(struct student f)
{
printf("total:%d\naverage:%.2f",f.total,f.avg);	
}

int main()
{
	struct student s;
	printf("Enter student student marks(maths,physics,chemistry):");
	scanf("%d %d %d",&s.m,&s.p,&s.c);
	s.total=(s.m+s.p+s.c);
	s.avg=s.total/3;
	display(s);
	
	return 0;
}
