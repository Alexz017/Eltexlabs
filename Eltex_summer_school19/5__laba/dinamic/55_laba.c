#include <stdio.h>
extern int del();
extern int pro();

int main()
{
	int n1, n2,d,k;
	printf("введите первое число\n");
	scanf("%d",&d);
	printf("введите второе число\n");
	scanf("%d",&k);
	n1 = del(d,k);
	n2 = pro(d,k);

	printf("результат деления(%d/%d) = %d\n",d,k,n1);
	printf("произведение(%d*%d) = %d\n",d,k,n2);

	return 0;
}
