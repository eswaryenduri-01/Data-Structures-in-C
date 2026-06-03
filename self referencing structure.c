//self referenching structure(single link)
#include <stdio.h>

struct student{
	int marks;
	float percent;
	struct student *p;
};

int main()
{
	struct student s1,s2;
	s1.p=&s2;
	s2.p=NULL;
	printf("enter student1 marks:");
	scanf("%d",&s1.marks);
	printf("enter student1 percent:");
		scanf("%f",&s1.percent);
		printf("enter student2 marks:");
	scanf("%d",&s1.p->marks);
	printf("enter tudent percent:");
		scanf("%f",&s1.p->percent);
		
		printf("student1 details are:\nmarks:%d\npercent:%f\nstudent2 details are:\nmarks:%d\npercent:%f"
		,s1.marks,s1.percent,s1.p->marks,s1.p->percent);
		return 0;
		
}
