#include<stdio.h>
#include<stdlib.h>

int MODS1(float a,int b)
{
	for (float i = 10; i < 12.5; i+=0.5)
	{
		float w = a;
		for (int j=b ; j > 0 ; j--)
		{
			w *= (1+(i / 100));
		}
		printf("total in rate %0.2f :%0.2f\n", i,w);
	}
	return 0;
}