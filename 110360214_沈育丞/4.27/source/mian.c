#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("side1\tside2\tside3\n");
	float i, j, k;
	for (i=1; i < 500; i++)
	{
		for (j=1; j <=i; j++)
		{
			for (k=1; k < 500; k++)
			{
				if ((i*i + j * j) == (k*k))
					printf("%.0f\t%.0f\t%.0f\t\n",i,j,k);
			}
		}
	}

	system("pause");
	return 0;
}