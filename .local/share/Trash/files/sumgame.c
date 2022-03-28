#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int a,b,result,i=10,chances=3;
	printf("Get ready to play the game\n");
	while(chances!=0)
	{
		srand(time(0));
		a = rand()%i;
		b = rand()%i;
		printf("\n%d + %d = ",a,b);
		scanf("%d",&result);
		if(result!=a+b)
		{
			chances--;
			printf("\nChances left : %d",chances);
			i=i/10;
		}
		i*=10;
	}
	if(chances==0)
		printf("\nGame over.\n");
	return 0;
}


