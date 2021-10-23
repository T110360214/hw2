#include<stdio.h>
#include<stdlib.h>

int main()
{
	float num, rate, days, TT;
	num = 0;
	printf("Enter loan principal(-1 to end):");
	scanf_s("%f", &num);
	while (num!=-1)
	{
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter term of lean in days :");
		scanf_s("%f", &days);


		TT = num*rate/365*days;


		printf("The interest charge is : %.2f  \n\n",TT );

		printf("Enter loan principal(-1 to end):");
		scanf_s("%f", &num);
	}


	system("pause");
	return 0;
}