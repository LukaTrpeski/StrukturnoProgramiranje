/*
Продолжение на претходната задача:

Од стандарден влез најпрво се читаат информации за бројот на фискални сметки коишто ќе бидат скенирани М, а потоа се вчитуваат податоци за M фискални сметки, како во претходната задача.

На стандарден излез да се испечати повратокот на ДДВ за секоја од скенираните фискални сметки. На крајот да се испечати сумата на купените артикли на фискалната сметка со најголем повраток на ДДВ, како и повратокот на ДДВ за таа сметка.

Да се игнорираат фискалните сметки, коишто имаат сума на артиклите поголема од 30.000 денари и за истите да се испечати соодветна порака, како во тест примерите.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j,a,sum=0,maxsum=0;
    float maxdanok=0;
    float danok,ddv=0;
    char c;
    scanf("%d",&m);
    for(j=0;j<m;j++)
    {
        sum=0;
        ddv=0;
        danok=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            sum+=a;
            scanf(" %c",&c);
            if(c=='A')
            {ddv+=a*0.18;}
            else if(c=='B')
            {ddv+=a*0.05;}
                    }
        danok=ddv*0.15;
        
        if(sum<=30000)
        {
            printf("Total tax return is: %.2f\n",danok);
            if(maxdanok<danok)
            {   
            maxdanok=danok;
            maxsum=sum;
            }
        }else
        {
            printf("Sum %d is bigger than 30000\n",sum);
        }
    
    }
    printf("Max amount of reciept: %d. Max tax return for reciepts: %.2f",maxsum,maxdanok);
}

