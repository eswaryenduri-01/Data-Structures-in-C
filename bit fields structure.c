//bit fields structure
#include <stdio.h>

struct time{
	 signed int m:6;
	 signed int h:4;
	unsigned int s:6;
}t;

int main()
{
	t.m=-9;
	t.h=+6;
	t.s=63;
	printf("minutes:%d\nhour:%d\nseconds:%d",t.m,t.h,t.s);
	printf("\n%d",sizeof(t));
	return 0;
	
}
