#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1024
/*
В конце каждой строки вставить заданный символ 
Параметры командной строки:
1. Имя входного файла 
2. Заданный символ
*/
int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;

    if (argc < 1)
    {
        fprintf(stderr, "Мало аргументов. Используйте <имя файла> <символ который хотите вставить>\n");
        exit(1);
    }
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Невозможно открыть файл.\n");
        exit(1);
    }
    FILE *fp2;
    fp2 = fopen("test1", "w");
    printf("Содержание файла %s\n", argv[1]);
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    rewind(fp);
    printf("Содержание файла после изменения\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            fputs(argv[2], fp2);
            printf("%s", argv[2]);
        }
        printf("%c", ch);
        fputc(ch, fp2);
    }

    fclose(fp2);
    fclose(fp);
    return 0;
}
