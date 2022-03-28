#include<stdio.h>

int main()
{
	FILE *fp,*fpi,*fpo,*fpe;
	fp=fopen("Hello.txt","w");
	fprintf(fp,"Hello from khushi:)"); //1. Write a string in file
	fclose(fp);
	//2. Odd even numbers
	char a;
	fpi=fopen("Integers.txt","w");
	for(int i=1;i<10;i++)
	{
		fprintf(fpi,"%d",i);
	}
	fclose(fpi);
	
	fpo=fopen("Odd.txt","w");
	fpe=fopen("Even.txt","w");
	fpi=fopen("Integers.txt","r");
	do{
		fscanf(fpi,"%c",&a);
		if(a%2==0)
			fprintf(fpe,"%c",a);
		else 
			fprintf(fpo,"%c",a);
	}while(!feof(fpi));
	fclose(fpi);
	fclose(fpo);
	fclose(fpe);	
	
	return 0;
}

