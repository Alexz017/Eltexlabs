#include <stdio.h>
#include <math.h>
#include <dlfcn.h>  
 
//1.Разработать функции для выполнения арифметических операций по вариантам. 
//2.Операции умножения и деления.

int main() {

	int s,n=0;
	printf("Введите целое число");
	scanf("%d", &n);
	printf("Какую операцию выполнить с числом %d:  1-умножение 2-деление",n);
	scanf("%d", &s);

	void *ext_oper;	
	int (*number3)(int k);
	int (*number4)(int k);

	
	ext_oper = dlopen("./libopera.so",RTLD_LAZY); 
	if (!ext_oper){
		fprintf(stderr,"dlopen() error: %s\n", dlerror());
		return 1;
	};

	if (s==1) {
		number3 = dlsym(ext_oper,"pro"); 
		printf("Результат умножения = %d\n",(*number3)(n)); 
	}
	else if (s==2){
		number4 = dlsym(ext_oper,"del");
		printf("Результат деления = %d\n",(*number4)(n));
	}
	
	dlclose(ext_oper);

	return 0;
}
