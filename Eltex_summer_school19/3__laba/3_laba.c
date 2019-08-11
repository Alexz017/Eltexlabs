/*
	Название детали 
	Год выпуска 
	Стоимость 
	Количество 
	Расположить записи в массиве в порядке возрастания стоимости 

 */
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name[50];
    int year;
	int gold;
	int koll;
} design;

 
void readdetails(design *st){
    printf("Введите Имя:");
    scanf("%s", st->name);
    printf("Введите год детали:");
    scanf("%d", &st->year);
    printf("Введите стоимость детали:");
    scanf("%d", &st->gold);
    printf("Введите количество деталей данного наименования:");
    scanf("%d", &st->koll);
}
static int cmp(const void *p1, const void *p2){
    design * st1 = *(design**)p1;
    design * st2 = *(design**)p2;
    return -(st1->gold - st2->gold);
}
 
int main(int argc, char **argv){
    int count = 0;
    printf("Введите количество деталей:");
    scanf("%d", &count);
    design** st = malloc(sizeof(design*)*count);
    for (int i = 0; i < count ; i++){
        st[i] =  malloc (sizeof(design));
        readdetails(st[i]);
    } 
    qsort(st, count, sizeof(design*), cmp);
    for (int i=0; i<count; i++)
    {
		printf("Название детали:%15s", st[i]->name);
		printf(" Год детали:4%d", st[i]->year);
		printf(" Стоимость детали:%6d", st[i]->gold);
		printf(" Количество деталей:%6d", st[i]->koll);
		printf("\n");
	}
    
    for (int i = 0; i < count; i++)
    {
        free(st[i]);
    }
    free(st);
    return 0;
}
