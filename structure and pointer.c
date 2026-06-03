#include <stdio.h>


struct student {
	int marks;
	float percent;
};

int main()
{
	struct student *p;
	struct student s;
	p=&s;
	printf("enter student marks:");
	scanf("%d",&p->marks);
	printf("enter student percentage:");
	scanf("%f",&p->percent);
	printf("student info is:\nmarks:%d\npercentage:%.2f",p->marks,p->percent);
	return 0;
}
