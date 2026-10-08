#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%5==0&&a%10==0)
	{
		printf("The given number is div by both 5 and 10");
	}
	else
	{
		printf("The given number is not divisible");
	}
}

