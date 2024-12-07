/*
Напишете целосно рекурзивна функција triagolnik(n) што за даден влезен аргумент n ќе испечати на екран превртен триаголник од броевите од 1 до n, како во примерот подолу. Дополнителни функции се дозволени, но истите мора да се рекурзивни. Не е дозволено користење на циклуси!

Пример за n=4:

1 2 3 4 
1 2 3 
1 2 
1
*/
#include <stdio.h>
void print(int n)
{
    if(n!=1)
    {print(n-1);
    printf("%d ",n);}
    else
    {printf("1 ");}
    
}
void triagolnik(int n)
{
    if(n!=1)
    {print(n);
    printf("\n");
    triagolnik(n-1);}
    else
    printf("1");;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    triagolnik(n);
}