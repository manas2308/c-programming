#include <stdio.h>
int main()
{
	char alphabet[52];
	printf("enter the letter");
	scanf("%c",& alphabet);
	if (alphabet == 'a','A','b','B','c','C','d','D','e','E','f','F','g','G','h','H','i','I','J','j','k','K','l','L','m','M','n','N','o','O','p','P','q','Q','r','R','s','S','t','T','U','u','V','v','w','W','x','X','y','Y','Z','z')
	{
		printf("the charecter is a alphabet");
	}
	else 
	{
		printf("it is not a alphabet");
	}
	return 0;
}