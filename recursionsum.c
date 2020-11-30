#include<stdio.h>
#include<conio.h>
int sum(int a);
void main()
{
	int num,result;
	printf("enter the number:");
	scanf("%d",&num);
	result=sum(num);
	printf(" sum of digits in %d is %d\n",num,result);
	getch();
}
int sum (int num)
{
	if(num!=0)
	{
		return(num%10+sum(num/10));
	}
	else
	{
		return 0;
	}
}
