#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *src;
	src = malloc(1<<100);
	fgets(src,500,stdin);
	printf("%s\n",src);
	return 1;
}
