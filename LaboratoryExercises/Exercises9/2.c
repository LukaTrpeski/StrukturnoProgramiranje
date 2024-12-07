/*
Од датотека "input.txt" да се вчита квадратна матрица, така што прво ќе се прочита број n што означува колку редови и колони има матрица, а потоа да се вчитаат сите n x n елементи од матрицата.

Во датотеката "output.txt" да се запише матрицата така што ќе се запишат само елементите над главната дијагонала, но ќе имаат вредност колку сумата на елементите на главната дијагонала. Печатењето да се прави со три места за бројот за елементите над главната дијагонала, а за останатите да се испечатат три празни места, со цел да се добие посакуваниот излез како во тест примерите.

Да не се менуваат функциите writeToFile и printFile!
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
void writeToFile() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

void printFile() {

    FILE *f=fopen("output.txt","r");
    char line[100];
    while(!feof(f)){
        fgets(line,100,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main() {
    writeToFile();
    int a[MAX][MAX], i, j, n, zbirNaDijagonala;
    FILE *f = fopen("input.txt", "r");
    FILE *q = fopen("output.txt","w");
    fscanf(f,"%d",&n);
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            fscanf(f, "%d", &a[i][j]);
    fclose(f);
    for(i=0;i<n;i++)
        zbirNaDijagonala+=a[i][i];
    for (i=0; i<n; i++) {

        for (j=0; j<n; j++) {

            if(i<j){

                fprintf(q,"%03d ",zbirNaDijagonala);

            }
            else
                fprintf(q,"    ");
        }
        fprintf(q,"\n");
    }
    fclose(q);
    printFile();
    return 0;
}