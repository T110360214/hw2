#include<stdio.h>
#include<stdlib.h>

int main()
{
	long num,num2;
	num = 0;
	printf("Enter sales in dollar(-1 to end):");
	scanf_s("%d", &num);
	while (num != -1)
	{
		num2 = 200 + 0.09*num;
		printf("salary is %d\n",num2 );
		printf("Enter sales in dollar(-1 to end):");
		scanf_s("%d", &num);
	}

	system("pause");
	return 0;
}