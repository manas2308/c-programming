#include<stdio.h>
int main()
{
	int num;
	printf("enter the number",num);
	scanf("%d", &num);
	if (num > 0)
	{
	printf("the number is positive");
}
else if(num < 0)
{
printf("the number is negative");
}
if (num == 0)
{
	printf("the number is null");
}
return 0;
}