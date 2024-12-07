//Да се имплементира функција elka(int n) што на стандарден излез ќе печати новогодишна елка од ѕвезди. n означува колку ѕведички има основата на елката и во сите тест примери n е непарен број.
#include <stdio.h>
#define MAX 100
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int matrica[MAX][MAX];
    for(i=0;i<n/2+1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<=n/2+i&&j>=n/2-i)
            {printf("*");}
            else
            {printf(" ");}
        }
        printf("\n");
    }
}