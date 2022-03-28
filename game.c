#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int num,gnum,p;
	newgame : srand(time(0));
	num = 1+(rand()%100);
	printf("%d",num);
	
	if(num==gnum)
		printf("Excellent!You guessed it right!");
	
	do{
		printf("Guess the number:");
		scanf("%d",&gnum);
		if(num==gnum)
		{
			printf("Excellent! You guessed it right!");
			printf("\nDo you want to play again? 0/1 : ");
			scanf("%d",&p);
			if(p==1)
				goto newgame;

		}
		else if(num>gnum)
			printf("\n Low.Guess a higher number.");
		else
			printf("\n High.Guess a lower number.");
	}while(num!=gnum);
	
		
	return 0;
}
