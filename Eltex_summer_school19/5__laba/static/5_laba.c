#include <stdio.h>
extern int del();
extern int pro();

int main()
{
	int  n2,d,k;
	printf("введите первое число\n");
	scanf("%d",&d);
	printf("введите второе число\n");
	scanf("%d",&k);
	del(d,k);
	n2 = pro(d,k);

	printf("Результат произведения(%d*%d) = %d\n",d,k,n2);

	return 0;
}
