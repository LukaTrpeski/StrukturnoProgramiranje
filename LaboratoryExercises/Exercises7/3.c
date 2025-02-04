/*
Да се напише рекурзивна функција f() која за даден природен број ќе го пресмета и враќа збирот на сите цифри кои се наоѓаат на парни позиции (гледано од десно кон лево). Се смета дека најмалку значајната цифра е на 1-ва позиција. Потоа да се напише програма која за даден природен број n (што се внесува од тастатура) ќе ја повика функцијата f() за да го испечати збирот на цифрите кои се наоѓаат на парни позиции во n.

Пример:

Влез:

717623

Излез:

16

Објаснување:

Збирот на цифрите што се наоѓаат на парни позиции во бројот 717623 е 7 + 7 + 2 = 16.
*/
#include <stdio.h>
int funkcija(int x)
{
    if(x>10)
    {
        return x%10+funkcija(x/100);
    }
    else
    {
        return x;
    }
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d",funkcija(x/10));
}