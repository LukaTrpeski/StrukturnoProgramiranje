/*
Дадена е текстуална датотека (livce.txt) која претставува ливче во спортска обложувалница.

На почетокот во датотеката, во посебен ред е запишана сумата на уплата (цел број).

Потоа во секој ред од датотеката е запишан по еден тип во следниот формат:

ab12 1 1.25
Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).

Ваша задача е да се испечати типот со најголем коефициент како и можната добивка на ливчето. Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.

Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();
    float koeficient, maxK=0, uplata;
    int tip, maxT;
    char shifra[10], maxS[10];
    FILE *f = fopen("livce.txt", "r");
    fscanf(f,"%f",&uplata);
    while((fscanf(f,"%s %d %f",shifra,&tip,&koeficient))!=EOF) {
        if(koeficient>maxK){
            maxK=koeficient;
            maxT=tip;
            strcpy(maxS,shifra);
        }
        uplata*=koeficient;
    }
    printf("%s %d %.2f\n",maxS,maxT,maxK);
    printf("%.2f",uplata);
    fclose(f);
    return 0;
}