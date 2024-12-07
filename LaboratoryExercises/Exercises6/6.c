/*
Да се напише програма во која од тастатура се читаат број на редици и колони (не поголеми од 100) и елементи на матрица (цели броеви).

Да се испечати редниот број на колоната (индексот) којашто има најмала сума на елементите. Ако има повеќе колони со иста најмала сума, да се испечати индексот на првата таква колона.

Читањето на елементи во матрицата да се направи преку функција void readMatrix(int a[100][100], int n, int m)
*/
#include <stdio.h>
void readMatrix(int a[100][100], int n, int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
int main()
{
    int matrica[100][100];
    int n,m,i,j,sum=0,k=0,min=0;
    scanf("%d %d",&n,&m);
    readMatrix(matrica,n,m);
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            sum+=matrica[i][j];
        }
        if(j==0)
        {min=sum;}
        if(sum<min)
        {min=sum;
        k=j;}
        sum=0;
    }
    printf("%d",k);
}
