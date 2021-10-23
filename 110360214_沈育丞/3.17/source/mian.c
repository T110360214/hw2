#include<stdio.h>
#include<stdlib.h>

int main()
{
	float num,balance, charges, credits, limit;
	printf("Enter account number(-1 TO END):");
	scanf_s("%f", &num);

	while (num!=-1)
	{
		printf("Enter beginning balance:");
		scanf_s("%f", &balance);
		printf("Enter total charges:");
		scanf_s("%f", &charges);
		printf("Enter total credits:");
		scanf_s("%f", &credits);
		printf("Enter credit limit:");
		scanf_s("%f", &limit);

		balance = balance + charges - credits;

		if (balance>limit)
		{
			printf("account : %.0f  \ncredit limit: %.2f \nbalance : %.2f \ncredit limit exceeded.\n\n",num,limit,balance );
		}
		
		printf("Enter account number(-1 TO END):");
		scanf_s("%f", &num);
	}

	

	system("pause");
	return 0;
}