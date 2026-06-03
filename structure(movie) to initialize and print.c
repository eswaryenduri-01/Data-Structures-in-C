//to create a structure movie and initialize the data and diaplay it
#include <stdio.h>
#include <string.h>

struct movie
{
 int count_people;
 int price;
 char movie[20];
 float rating;
};

int main()
{
	struct movie m1;
	m1.count_people=10;
	m1.price=150;
	m1.rating=7.8;
	strcpy(m1.movie,"salaar");
	
	printf("the details of movie:\n");
	printf("the people count is :%d\n",m1.count_people);
	printf("the price of ticket is :%d\n",m1.price);
	printf("the movie is :%s\n",m1.movie);
	printf("the rating is :%.1f\n",m1.rating);
	return 0;
}
