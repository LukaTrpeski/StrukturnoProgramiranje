/*
Од стандарден влез се чита позитивен број n кој ги дава димензиите на квадратна матрица од цели броеви, која се чита во продолжение. Да се напише програма која за таа матрица(макс. 100 x 100) ќе ја испечати должината на најдолгата строго растечка подниза, доколку матрицата ја гледаме ред по ред.

На пример, ако е дадена следната матрица:

1 2 3 9 8
5 5 5 5 5 
0 1 2 0 0 
9 1 2 3 4 
1 1 1 1 1
должината на најдолгата строго растечка подниза е 4, а тоа е должината на поднизата 1 2 3 4, во четвртиот ред.
*/
#include <stdio.h>

int main()
{
    int n,i,j,br=0,max=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {   
        for(j=0;j<n;j++)
        {   
            scanf("%d",&a[j]);
        }
        for(j=0;j<n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                br++;
                if(max<br)
                {
                    max=br;
                }
            }
            else
            {
                br=0;
            }
            
        }br=0;
    }
    printf("%d",max+1);
    return 0;
}