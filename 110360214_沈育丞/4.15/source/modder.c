#include<stdio.h>
#include<stdlib.h>

int MODS1(float a,int b)
{
	float w = a;
	float w2 = a;
	float w3 = a;
	float w4 = a;
	float w5 = a;
	printf("1.10\t\t1.105\t\t1.110\t\t1.115\t\t1.120\n", w, w2, w3, w4, w5);

	for (int j=b ; j > 0 ; j--)
	{
		w *= 1.100;
		w2 *= 1.105;
		w3 *= 1.110;
		w4 *= 1.115;
		w5 *= 1.120;
		printf("%.1f\t\t%.1f\t\t%.1f\t\t%.1f\t\t%.1f\n", w,w2,w3,w4,w5);
	}
	

	return 0;
}