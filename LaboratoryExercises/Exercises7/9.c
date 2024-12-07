/*
Напишете целосно рекурзивна функција triagolnik(n) што за даден влезен аргумент n ќе испечати на екран триаголник од броевите од 1 до n. Дополнителни функции се дозволени, но истите мора да се исто така рекурзивни. Не е дозволено користење на циклуси!

Пример за n=4.

    1
    12
    123
    1234
*/
#include <stdio.h>
void print(int n)
{
    if(n==1)
        printf("1");
    else
    {
        print(n-1);
        printf("%d",n);
    }
}
void triagolnik(int n)
{
    if(n>1)
        triagolnik(n-1);
    print(n);
    printf("\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    triagolnik(n);
}