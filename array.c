#include<stdio.h>

void main()
{
	int std_id,newmarks;
	int marks[5]={51,52,53,54,55};
	printf("Enter student id:");
	scanf("%d",&std_id);
	printf("Current marks : %d",marks[std_id]);
	printf("Enter updated marks :");
	scanf("%d",&newmarks);
	marks[std_id]=newmarks;
	printf("Updated marks : %d",marks[std_id]);
}
