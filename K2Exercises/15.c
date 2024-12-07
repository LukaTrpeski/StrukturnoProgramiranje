/*
Да се напише програма во која се вчитува матрица од цели броеви A со N редици и N * 2 колони (N не е поголемо од 50). Програмата треба да ја трансформира вчитаната матрица во нова матрица B, така што сите елементи десно од N-тата колона ќе ги префрли под N-тата редица, односно од матрица со димензија N редици и 2 * N колони ќе се добие матрица со 2 * N редици x N колони.

Пример за N = 3 Влез:

3

171328143915410165111761218

Излез:

171341016281451117391561218
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 50
#define MAX2 100
int main() {
    int n, matrica[MAX][MAX2], druga[MAX2][MAX];
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n*2;j++) {
            scanf("%d",&matrica[i][j]);
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            druga[i][j]=matrica[i][j];
        }
    }
    for(int i=n;i<2*n;i++) {
        for(int j=0;j<n;j++) {
            druga[i][j]=matrica[i-n][j+n];
        }
    }
    for(int i=0;i<2*n;i++) {
        for(int j=0;j<n;j++) {
            printf("%d ",druga[i][j]);
        }
        printf("\n");
    }
}