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
	for(int i=1;i<3;i++)
	{	
		printf("\nEnter the account number for new registration:");
		scanf("%d",&users[i].acc_no);
		printf("\nEnter your pin:");
		scanf("%d",&users[i].acc_pin);
		printf("\nEnter the account holder name:");
		scanf("%s",&users[i].acc_holder);
		printf("\nEnter the current balance:");
		scanf("%d",&users[i].acc_balance);
		
	}
}

int main()
{
	int a,acn,acp,more;
	newregistration();
	int chances=3;
	while(chances !=0) //Login section
	{
		printf("Enter account number and pin :");
		scanf("%d %d",&acn,&acp);
		if (acp== users[acn].acc_pin)	
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
				balancecheck(users[acn].acc_balance); break;
			case 2:
				withdrawal(users[acn].acc_balance); break;
			case 3:
				deposit(users[acn].acc_balance); break;
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
