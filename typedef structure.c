//type def 
#include <stdio.h>

 typedef struct  {
	int marks;
	float percent;
	
}student;

int main()
{
	 student s,s1;
	s.marks=45;
	s.percent=89.90;
	printf("marks:%d\npercent:%f\n",s.marks,s.percent);
	s1.marks=46;
	s1.percent=95.90;
	printf("marks:%d\npercent:%f\n",s1.marks,s1.percent);
	return 0;
}

