/*
Oд стандарден влез се вчитува еден цел број X, димензии на матрица M и N (цели броеви), како и елементите на матрицата со димензии M x N (цели броеви). Да се напише програма што ќе ги промени редиците на матрицата на следниот начин:

Ако збирот на елементите од редот е поголем од X, елементите на тој ред добиваат вредност 1
Ако збирот на елементите од редот е помал од X, елементите на тој ред добиваат вредност -1
Ако збирот на елементите од редот е еднаков на X, елементите на тој ред добиваат вредност 0
Променетата матрица да се испечати на екран.

Пример.

Влез:

31

4317652881415716945111576

Излез:

−1−1100−1−1100−1−1100−1−1100
*/
#inclu
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100
int funkcija(int red,int dolzhina,int matrica[MAX][MAX]) {
    int j, suma=0;
    for(j=0;j<dolzhina;j++) {
        suma+=matrica[red][j];
    }
    return suma;
}
int main() {
    int m, n, x, matrica[MAX][MAX], sumaNaRed;
    scanf("%d %d %d",&x,&m,&n);
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&matrica[i][j]);
        }
    }
    for(int i=0;i<m;i++) {
        sumaNaRed=funkcija(i,n,matrica);
        for(int j=0;j<n;j++) {
            if(sumaNaRed>x)
                {matrica[i][j]=1;
                }
            else if(sumaNaRed<x)
                {matrica[i][j]=-1;
                }
            else if(sumaNaRed==x)
                matrica[i][j]=0;
        }
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            printf("%d ",matrica[i][j]);
        }
        printf("\n");
    }

}