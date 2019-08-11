#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1024
int main(int argc, char *argv[]){
  FILE *fp;
   char ch;
   
   if (argc < 1){
		fprintf (stderr, "Мало аргументов. Используйте <имя файла> <символ который хотите вставить>\n");
		exit (1);
  }
  if((fp=fopen(argv[1],"r"))==NULL) {
    printf("Невозможно открыть файл.\n");
    exit(1);
  }
  FILE *fp2;
  fp2=fopen("test1","w");
	

  while((ch=fgetc(fp)) != EOF) {
	if (ch =='\n')
	{
		fputs( argv[2],fp2);
	 printf("%s",argv[2]);
	 
 }
	 printf("%c", ch);
	fputc( ch,fp2);
	
  }
  
  fclose(fp2);
  fclose(fp);
  return 0;
}
