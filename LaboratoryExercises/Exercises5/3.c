/*
Во играта Бинго по редослед се извлекуваат непознат број броеви со вредности помеѓу 1 и 90. Секогаш се извлекуваат повеќе од 8 броја. Претпоставете дека внесувањето престанува кога ќе се внесе број кој не е во опсегот вредности.

Освен главната добивка, играчите играат и на џокер број. Џокер бројот се формира на следниот начин: Се слепуваат помалку значајните цифри од првите 7 извлечени броја, и на тој број се додаваат сите следни внесени броеви. Ваша задача е да го отпечатите така добиениот џокер број.
*/
#include <stdio.h>

int main()
{
    int n,dzoker,i,br=0,cifra,sum=0;
    while(scanf("%d",&n))
    {
        
        if(n>90||n<1)
        {break;}
        else
        {   
            br++;
            if(br<=7)
            {cifra=n%10;
            sum=sum*10+cifra;}
            else
            {sum+=n;}
        }
    }
    printf("%d",sum);
}