#include <stdio.h>
double del(int a,int b)
{
	float res;
	res = (float)a/b;
	printf("Результат деления %d/%d = %f\n",a,b,res);
	
	return 0;
}
