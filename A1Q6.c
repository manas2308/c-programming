#include<stdio.h>
int main()
{
	int amount,notes,denomination;
	printf("enter amount");
	scanf("%d",&amount);
	notes = 0;
	denomination = 500;
	notes += amount/denomination;
	amount %= denomination;
	denomination = 100;
	notes += amount/denomination;
	amount %=denomination;
	denomination = 50;
	notes += amount/denomination;
	amount %=denomination;
	denomination = 20;
	notes +=amount/denomination;
	amount %=denomination;
	denomination = 10;
	notes += amount/denomination;
	amount %= denomination;
	denomination = 5;
	notes += amount/denomination;
	amount %=denomination;
	denomination = 2;
	notes += amount/denomination;
	amount %= denomination;
	denomination = 1;
	notes += amount/denomination;
	amount %= denomination;
	printf("min no of notes required %d\n",notes);
	return 0;
}