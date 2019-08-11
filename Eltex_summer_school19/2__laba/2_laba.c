#include <stdio.h>
#include <stdlib.h>
#include <mcheck.h> 
#include <string.h>
#define LEN_GTH 1024 
/*
	Расположить строки по убыванию длины 
	Входные параметры:
	1. Массив 
	2. Размерность массива 
	Выходные параметры:
	1. Количество перестановок
	2. Длина большей строки 
 
 */
char** readMas(int count){
	char buffer[LEN_GTH];
	char **mas; 
	mas = (char **)malloc(sizeof(char *)*count);
    for (int i = 0; i < count ; i++)
    {
		fgets(buffer, LEN_GTH, stdin);
        mas[i] = (char *)malloc(sizeof(char)*strlen(buffer)); 
        strcpy(mas[i], buffer); 
    }
    return mas; 
}
int schetpro(char *str){
    int len = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]==' '){
            len++;
        } 
    }
    return len;
}

void printMas(char **mas, int count){
    for (int i = 0; i < count ; i++){
        printf("%s", mas[i]);
    }
}

void freeMas(char **mas, int count){
	for (int i = 0; i < count; i++){
        free(mas[i]); 
    }
    free(mas); 
}

void sort(char **massiv, int count){
char *buf;int koll=0;
	for(int j=0; j<count; j++)
	{
		for(int i=0; i<count-1; i++)
			{
				if(strlen(massiv[i])<strlen(massiv[i+1]))
				{
				buf = massiv[i];
				massiv[i] = massiv[i+1];
				massiv[i+1] = buf;
				koll++;
                }
			}
	}
 printf("Колличество перестановок = %d\n", koll);
}


int main(int argc, char **argv){
	char **mas = NULL;
	int count;
	printf("Введите число строк\n");
	scanf("%d\n", &count);
	mtrace();
	mas = readMas(count);
	sort(mas, count);
	int pb=schetpro(mas[0]);
	printMas(mas,count);
	printf("Максимальное количество символов в строке= %ld\n", strlen(mas[0])-1-pb);
    freeMas(mas, count);
    }
