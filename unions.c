//unions
#include <string.h>
#include <stdio.h>

union book{
	int pages;
	float price;  
	char bname[20];
	long phone;
};

int main()
{
	union book b;
	printf("the info of book is:");
	b.pages=200;
	printf("\ntotal pages=%d",b.pages);
	b.price=299;
		printf("\nprice of book=%.1f",b.price);
	strcpy(b.bname,"datastructure");
	printf("\nname of book=%s",b.bname);
	b.phone=1234567890;
	printf("\nauthor num=%d",b.phone);		
			return 0;
}

