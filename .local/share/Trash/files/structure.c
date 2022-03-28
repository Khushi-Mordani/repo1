#include<stdio.h>

struct user{
int acc_no;
int acc_pin;
char acc_holder[20];
int acc_balance;
}users[5];

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
void newregistration()
{
	for(int i=0;i<5;i++)
	{	
		printf("\nEnter the account number for new registration:");
		scanf("%d",&users[1].acc_no);
		printf("\nEnter your pin:");
		scanf("%d",&users[1].acc_pin);
		printf("\nEnter the account holder name:");
		scanf("%s",&users[1].acc_holder);
		printf("\nEnter the current balance:");
		scanf("%d",&users[1].acc_balance);
		
	}
}

int main()
{
	newregistration();
	printf("Menu : \n Choose the activity .\n 1. Check Balance \n 2. Withdraw Cash \n 3. Deposit Cash \n 4. Quit");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				balancecheck(acc_balance); break;
			case 2:
				withdrawal(acc_balance); break;
			case 3:
				deposit(acc_balance); break;
			case 4:
				break; 
		}
}
