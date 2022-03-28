#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void balancecheck (int);
void withdrawal(int);
void deposit(int);

int main()
{
	int acc_no[5] = {0,1,2,3,4} , acc_pin[5] = {1234,3456,5678,7890,9012} ,acn,acp,chances = 3,a;
	int bal,more;
	srand(time(0));
	bal = 1000 + rand()%10000;

	
	
	while(chances !=0) //Login section
	{
		printf("Enter account number and pin :");
		scanf("%d %d",&acn,&acp);
		if (acp== acc_pin[acn])	
		{
			printf("Login successful!\n");break;}
		else {
			chances--;
			printf("Enter valid pin.Chances left = %d \n",chances);
						
		}
			
	}

	activity : if(chances!=0)
	{

	printf("Menu : \n Choose the activity .\n 1. Check Balance \n 2. Withdraw Cash \n 3. Deposit Cash \n 4. Quit");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				balancecheck(bal); break;
			case 2:
				withdrawal(bal); break;
			case 3:
				deposit(bal); break;
			case 4:
				break; 
		}
	}
	else
		printf("Card blocked.");

	printf("\nMore transactions ? 1/0 :");//more than one activities
	scanf("%d",&more);
	if(more==1)
	{
		goto activity;
	}
		
	return 0;
}



void balancecheck(int b)
{
	printf("\nCurrent Balance : %d",b);
	
	
}

void withdrawal(int b)
{
	int amt;
	printf("\nEnter the amount you want to withdraw:");
	scanf("%d",&amt);
	printf("Balance after withdrawal : %d", b-amt);
}
void deposit(int b)
{
	int amt;
	printf("\nEnter the amount you want to deposit:");
	scanf("%d",&amt);
	printf("Balance after deposit : %d", b+amt);
}


