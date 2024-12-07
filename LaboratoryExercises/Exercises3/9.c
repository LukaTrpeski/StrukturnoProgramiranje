/*
Од влез се внесува цел позитивен број n, така што n > 2. Со помош на ѕвездички, да се исцрта полн правоаголен триаголник со висина и ширина n, како во примерот:

За n=5

    *
   **
  ***
 ****
*****
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n<=2)
    {
        printf("Nevaliden vlez");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            for(j=n;j>0;j--)
            {
                if(j==i||j<i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}
