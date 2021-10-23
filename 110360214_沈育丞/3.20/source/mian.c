#include<stdio.h>
#include<stdlib.h>

int main()
{
	float num,balance;
	num = 0;

	printf("Enter the hours of worked(-1 to end):");
	scanf_s("%f", &num);

	while (num!=-1)
	{
		printf("Enter hourly rate of the worker:");
		scanf_s("%f", &balance);


		balance *= num;

		printf("Salary is : %.2f\n\n",balance );

		printf("Enter the hours of worked(-1 to end):");
		scanf_s("%f", &num);
	}

	

	system("pause");
	return 0;
}