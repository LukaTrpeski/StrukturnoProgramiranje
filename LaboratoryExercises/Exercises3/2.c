/*
Од стандарден влез се внесуваат два цели броеви A и P.

Да се испечатат во опаѓачки редослед првите 5 броеви во интервалот (0,A] за коишто важи дека сумата на нивните цифри изнесува P проценти од самиот број.

Ако нема такви броеви во интервалот, да се испечати порака NEMA.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,p,sum=0;
    int i,j,k=0;
    scanf("%f%f",&a,&p);
    for(i=a;i>0;i--)
    {
        for(j=i;j!=0;j/=10)
        {
            sum+=j%10;
        }

        if(k<5&&sum==((i*p)/100.0))
        {
            printf("%d\n",i);
            k++;
        }
        sum=0;
    }
    if(k==0)
        {
            printf("NEMA");
        }
    return 0;
}
