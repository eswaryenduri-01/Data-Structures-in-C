//nested structure(embedded)
//to display employee info and address
#include <stdio.h>
#include <string.h>

struct employee
{
	int id;
	char name[15];
	struct address{
	char city[20];
	int pin;
  	}add;
};

int main()
{
	struct employee e;
e.id=10;
strcpy(e.name,"pavan");
strcpy(e.add.city,"kakinada");
e.add.pin=533001;

printf("employee details are:");
printf("id:%d\nname:%s\ncity:%s\npincode:%d",e.id,e.name,e.add.city,e.add.pin);
return 0;
}
