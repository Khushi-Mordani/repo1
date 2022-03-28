#include<stdio.h>
#include<string.h>

struct student{
int id;
char name[20];
float cpi;
int backlog;
}s1;

union book{
char title[20];
char author[50];
int pages;
float price;
}u1;

int main()
{
	s1.id=1;
	strcpy(s1.name,"abc");
	s1.cpi=9.5;
	s1.backlog=1;
	printf("Student 1: %d\n%s\n%f\n%d\n",s1.id,s1.name,s1.cpi,s1.backlog);
	
	u1.pages = 300;
	printf("Pages : %d",u1.pages);
	u1.price = 350.00;
	printf("\nPrice :%d",u1.price);
	printf("\npages :%d",u1.pages);
	return 0;
}
