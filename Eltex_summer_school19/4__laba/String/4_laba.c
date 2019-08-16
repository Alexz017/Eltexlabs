#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1500
/*
Оставить только строки, начинающиеся с латинских букв 
	Параметры командной строки:
	1. Имя входного файла
	2. Количество обрабатываемых строк 
*/

int main(int argc, char *argv[]){
	 FILE *fp;
   char buffer[N];
if (argc < 2 ){
		fprintf (stderr, "Мало аргументов. Используйте <имя файла> <количество строк>\n");
		exit (1);
  }
  if((fp=fopen(argv[1],"r"))==NULL) {
    printf("Невозможно открыть файл.\n");
    exit(1);
  }
  int d=atoi(argv[2]);
  int i=0;
  FILE *fp2;
  fp2=fopen("test","w");
  printf("Содержание файла %s",argv[1]);
  while (!feof(fp)) {
	 fgets(buffer, N, fp);
	 printf("%s", buffer);
	
}
printf("\n");    
rewind(fp);
printf("количество строк: %s \n",argv[2]);
printf("критерий отбора: строки, должны начинаться с латинских букв:\n");
  while((!feof(fp))&(i<d)) {
	  int s=0;
	 fgets(buffer, N, fp);
	 s=buffer[0];
	 if ((s>64)&(s<123)){
	fputs(buffer,fp2);
	 printf("%s", buffer);
}    
}


  fclose(fp2);
  fclose(fp);
  return 0;
}
