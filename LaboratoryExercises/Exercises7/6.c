//Да се напише рекурзивна функција за наоѓање на НЗД на два броја а и b, каде a > b. Потсетник: За наоѓање на НЗД може да се користи Евклидовиот алгоритам.
#include <stdio.h>
int funkcija(int a,int b)
{
    if(a%b==0)
    {
        return b;
    }
        return funkcija(b,a%b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",funkcija(a,b));
}