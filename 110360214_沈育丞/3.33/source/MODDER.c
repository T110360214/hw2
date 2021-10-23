#include<stdio.h>
#include<stdlib.h>

int MODS1()
{
	int i, j;
	printf("ENTER length\n");
	scanf_s("%d",&i);
	printf("ENTER breadth\n");
	scanf_s("%d", &j);
	for (int k=0 ;  k < i;  k++)
	{
		for (int z = 0; z < j; z++)
		{
			if ((k == 0) || (k == (i-1)) || (z==0) || (z == (j-1)))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}