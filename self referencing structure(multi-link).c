//self referenching structure(multi link)
#include <stdio.h>

struct student{
	int marks;
	float percent;
	struct student *p;
	struct student *n;
};

int main()
{
	struct student s1,s2,s3;
	s1.p=NULL;
	s1.n=&s2;
	s2.p=&s1;
	s2.n=&s3;
	s3.p=&s2;
	s3.n=NULL;
	printf("enter student1 marks:");
	scanf("%d",&s1.marks);
	printf("enter student1 percent:");
		scanf("%f",&s1.percent);
		
		
		printf("enter student2 marks:");
	scanf("%d",&s1.n->marks);
	printf("enter student2 percent:");
		scanf("%f",&s1.n->percent);
		
		
		
		printf("enter student3 marks:");
	scanf("%d",&s1.n->n->marks);
	printf("enter student3 percent:");
		scanf("%f",&s1.n->n->percent);
		
		
printf("student1 details are:\nmarks:%d\npercent:%f\nstudent2 details are:\nmarks:%d\npercent:%f\nstudent3 details are:\nmarks:%d\npercent:%f\n"
		,s1.marks,s1.percent,s1.n->marks,s1.n->percent,s1.n->n->marks,s1.n->n->percent);
		
		printf("\nstudent 1details using s3:\nmarks:%d\npercent:%f\n",s3.p->p->marks,s3.p->p->percent);
		return 0;
		
}
