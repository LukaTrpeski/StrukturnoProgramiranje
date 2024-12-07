/*
Дефинирајте ја рекурзивната функција "sumOfDigits(int number)" така што за дадениот аргумент "number" ќе ја пресмета сумата на сите негови цифри. Пример за аргумент "1234" функцијата треба да врати 1 + 2 + 3 + 4 = 10.

Не правете промени во дадената main функција, само дефинирајте ја рекурзивната функција.
*/
#include <stdio.h>
int sumOfDigits(int n)
{
    if(n<10)
    {
        return n%10;
    }
        return n%10+sumOfDigits(n/10);
}
int main()
{   
    int n,x,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        sum+=sumOfDigits(x);
        printf("%d\n",sumOfDigits(x));
    }
    printf("%d",sum);
}