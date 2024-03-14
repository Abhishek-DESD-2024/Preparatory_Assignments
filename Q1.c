#include<stdio.h>


int main(void)
{
	int num1, num2;
	printf("Enter the two numbers:>");
	scanf("%d %d",&num1,&num2);

	if (num1>num2)
		printf("Num1 %d is greater\n",num1);
	else 
		printf("Num2 %d is greater\n",num2);

	return 0;
}
