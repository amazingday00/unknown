#include<stdio.h>

int main()
{
	int cardNum;
	char studentName[20];

	printf("************************************************\n");
	printf("*****Welcome to the books management system*****\n");
	printf("************************************************\n");
	printf("~~~~~~~~\t\t\t\t~~~~~~~~\n");
	printf("Please input your card number:\n");
	scanf("%d",&cardNum);
	printf("Please input your name:\n");
	scanf("%s",studentName);
	printf("\nWelcome,%s! Your card number is:%d\n",studentName,cardNum);	

	return 0;
}
