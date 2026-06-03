//nested structure(seperate)
//to display employee info and date of birth
#include <stdio.h>
#include <string.h>

struct dob{
	int dd;
	int mm;
	int yyyy;
}; //2nd structure
struct employee {
	char name[20];
	int id;
	struct dob d;
}; //1st structure

int main ()
{
	struct employee e;
	strcpy(e.name,"mahesh");
	e.id=121;
	e.d.dd=10;
	e.d.mm=7;
	e.d.yyyy=1990;
	printf("the info of employee is:\n");
	printf("name:%s\nid:%d\ndd:%d\nmm:%d\nyyyy:%d",e.name,e.id,e.d.dd,e.d.mm,e.d.yyyy);
	return 0;
}

