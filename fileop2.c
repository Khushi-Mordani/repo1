#include<stdio.h>

int main()
{
	FILE *std;
	char std_name[20];
	int marks;
	std=fopen("Students.txt","w");
	int std_num=0;
	while(std_num<=3)
	{
		printf("Enter your name and marks:");
		scanf("%s %d",std_name,&marks);
		fprintf(std,"Name : %s Marks : %d\n",std_name,marks);
		std_num++;
	}
	fclose(std);
	return 0;
}


