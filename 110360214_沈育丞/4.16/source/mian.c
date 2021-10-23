#include<stdio.h>
#include<stdlib.h>

void www(int a);

int main()
{
	printf("(A)\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = i; j >-1 ;j--)
			www(2);
		printf("\n");
	}
	printf("\n");

	printf("(B)\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 9-i; j > -1; j--)
			www(2);
		printf("\n");
	}
	printf("\n");

	printf("(C)\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j < i )
				www(1);
			else
				www(2);
		}
		printf("\n");
	}
	printf("\n");

	printf("(D)\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 10; j > 0; j--)
		{
			if (j-i>0)
				www(1);
			else
				www(2);
		}
		printf("\n");
	}
	printf("\n");
	

	system("pause");
	return 0;
}


void www(int a)
{
	char ch[2];
	ch[0] = 0;
	ch[1] = 0;
	if (a == 1)
		ch[0] = 32;
	if (a == 2)
		ch[0] = 42;
	if (a == 3)
	{
		ch[0] = 42;
		ch[1] = 42;
	}
	for (int i = 0; i < 2; i++)
	{
		printf("%c", ch[i]);
	}
}