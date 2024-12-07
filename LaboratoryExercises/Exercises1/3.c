//Да се напише програма коjа за даден цел броj секунди коj се чита од стандарден влез, ќе ги отпечати на екран соодветните вредности во часови, минути и секунди.
#include <stdio.h>

int main()
{
    int n,h,m,s;
    scanf("%d",&n);
    h=n/3600;
    m=n%3600/60;
    s=n%3600%60;
    printf("%d sekundi se %d casovi, %d minuti i %d sekundi",n,h,m,s);
    return 0;
}
