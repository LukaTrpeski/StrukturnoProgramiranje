/*
Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата. Да се генерира низа (со најмногу m) така што секој елемент од низата се добива со наоѓање на елементот во секоја редица од матрицата што е најоддалечен од аритметичката средина во рамки на таа редица. Ако постојат повеќе елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот. Редоследот на запишување на елементите во низата одговара на редоследот на редиците.

Пример:

Влез:

3 6

1 2 2 3 4 5

1 1 2 2 3 3

1 2 3 4 5 6

Излез:

5 1 1
*/
#include <stdio.h>
#include <math.h>
#define MAX 100
int main() {
    int m, n, matrica[MAX][MAX], i, j;
    float niza[MAX];
    int niza1[MAX];
    scanf("%d%d",&m,&n);
    float aritmetichka;
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&matrica[i][j]);
        }
    }
    for(i=0;i<m;i++) {
        int suma=0;
        for(j=0;j<n;j++) {
            suma+=matrica[i][j];
        }
        aritmetichka=(float)suma/n;
        niza[i]=-1;
        for(j=0;j<n;j++) 
        {
            if(fabs((aritmetichka-matrica[i][j]))>niza[i]) 
            {
                niza[i]=fabs(aritmetichka-matrica[i][j]);
                niza1[i]=matrica[i][j];
            }
        }
    }
    for(i=0;i<m;i++){
        printf("%d ",niza1[i]);
    }
}  