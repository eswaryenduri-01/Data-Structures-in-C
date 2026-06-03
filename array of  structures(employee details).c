//write a program to store the information 3 employees by using array of structure
#include <stdio.h>
//#include <string.h>

struct employee{
	char name[20];
	int id;
	float salary;
};

int main()
{
	printf("%d\n",sizeof(struct employee));
	struct employee e[3]; //array of structure
	int i;
	
	printf("Enter employee info(name,id,salary):");
	for(i=0;i<3;i++)
	{
		scanf("%s %d %f",e[i].name,&e[i].id,&e[i].salary);
	}
	
	printf("the info of employees is:");
		for(i=0;i<3;i++)
	{
		printf("\nemployee %d details are:",i+1);
		printf("%s %d %f",e[i].name,e[i].id,e[i].salary);
	}
	return 0;
	
}
