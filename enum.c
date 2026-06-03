#include <stdio.h>
enum day{sun,mon,tue,wed,thu,fri,sat};  //these members in day treated as interger

int main ()
{
	enum day  d;
	int a=sat;
	printf("day value=%d",a);
	int i;
	
	for(i=sun;i<=sat;i++)
	{
		printf("\n%d",i);
	}
	
	
	return 0;
}
