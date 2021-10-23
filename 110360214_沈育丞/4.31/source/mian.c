#include<stdio.h>
#include<stdlib.h>

void www(char ch);

int main()
{
	float num,balance, charges, credits, limit;
	num = 0;

	
	for (int i = 0; i < 9; i++)
	{
		if (i < 5)
		{
			for (int j = 0; j < 10; j++)
			{
				if ((4 - i) > j)
					www(32);
				else if (j < (5 + i))
					www(42);
			}
		}
		else
		{
			for (int j = 0; j < 10; j++)
			{
				if ((i-4) > j)
					www(32);
				else if (j < (13- i))
					www(42);
			}
		}
		printf("\n");
	}


	system("pause");
	return 0;
}

void www(char ch)
{
	printf("%c", ch);
	//32 42*
}