#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("Enter paycode:");
	scanf_s("%d", &num);

	double salary;
	int wh=0;
	long pi;
	double sales;

	switch (num)
	{
		case 1:
			printf("Enter salary:");
			scanf_s("%lf", &salary);

			printf("your salary is:%.2f",salary);
			break;
		case 2:
			printf("Enter salary/HOUR:");
			scanf_s("%lf", &salary);
			printf("Enter work hours:");
			scanf_s("%d", &wh);
			if (wh > 40)
				salary = (wh - 40)*1.5*salary + salary * 40;
			else
				salary = salary * wh;

			printf("your salary is:%.2f", salary);
			break;
		case 3:
			printf("Enter sales:");
			scanf_s("%lf", &sales);
			salary = sales * 0.057 + 250;
			printf("your salary is:%.2f", salary);
			break;
		case 4:
			printf("Enter dollar/piece:");
			scanf_s("%lf", &salary);
			printf("Enter done piece:");
			scanf_s("%d", &pi);
			salary = pi * salary;
			printf("your salary is:%.2f", salary);
			break;
		default:
			printf("error");
			break;
	}
	

	system("pause");
	return 0;
}