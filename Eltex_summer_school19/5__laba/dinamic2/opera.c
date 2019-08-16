#include <stdio.h>

int pro(int k) {
	int n=0;
	printf("введите число на которое хотите умножить");
	scanf("%d", &n);
	int b = k*n;
	return b;
}

double del(int a) {
	int b=0;
	double res=0;
	printf("введите число на которое хотите поделить");
	scanf("%d", &b);
	res = (double)a/b;
	printf("Результат деления %d/%d = %f\n",a,b,res);
	return a;
}
