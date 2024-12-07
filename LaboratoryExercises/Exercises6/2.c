/*
За дадена квадратна матрица со големина N, најдете ја разликата помеѓу главната и споредната дијагонала, а потоа разликата помеѓу првата колона и последната колона на матрицата.

Пример:

Влез: 3

1 2 3

1 1 1

2 2 2

Излез:

-2

-2
*/
#include <stdio.h>
#define MAX 100
int main()
{
    int n,i,j,sumg=0,sums=0,sumprva=0,sumposledna=0;
    int matrica[MAX][MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrica[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {sumg+=matrica[i][j];}
            if(n-i-1==j)
            {sums+=matrica[i][j];}
            if(j==0)
            {sumprva+=matrica[i][j];}
            if(j==n-1)
            {sumposledna+=matrica[i][j];}
        }
    }
    printf("%d\n",sumg-sums);
    printf("%d\n",sumprva-sumposledna);
}
    