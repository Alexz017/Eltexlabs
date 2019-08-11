#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1024
int main(int argc, char *argv[]){
	 FILE *fp;
   char buffer[N];
if (argc < 3 ){
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
  while((!feof(fp))&(i<d)) {
	  
	 fgets(buffer, N, fp);
	 fputs(buffer,fp2);
	 printf("%s", buffer);
	 i++;
    
}


  fclose(fp2);
  fclose(fp);
  return 0;
}
