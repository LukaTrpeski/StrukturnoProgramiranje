//Да се напише програма во која во даден опсег на природни броеви [a,b], ќе се најдат и отпечатат сите броеви чијшто збир на цифри кои се деливи со 2 е поголем од 0 и е делив со 4. На крај да се отпечати и бројот на вакви броеви.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,j,cifra,sum=0,k=0,l=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=i;j!=0;j/=10)
        {
            cifra=j%10;
            if(cifra%2==0&&cifra!=0)
            {
                sum+=cifra;
                k++;
            }

        }
        if(sum%4==0&&k>0)
        {
            printf("%d\n",i);
            l++;
        }
        sum=0;
        k=0;
    }
    printf("Vkupno: %d",l);
    return 0;
}
