/*
Да се напише рекурзивна функција proizvod() која за даден природен број ќе го пресметува и враќа производот на сите цифри кои се наоѓаат на парни позиции (гледано од десно кон лево). Се смета дека најмалку значајната цифра се наоѓа на 1-та позиција. Потоа да се напише програма која за природен број n (што се внесува од тастатура) ќе ја повика функцијата proizvod() за да го испечати производот на цифрите кои што се наоѓаат на парни позиции во n.

Пример.

Влез:

717623

Излез:

98

Објаснување:

Производот на цифрите што се наоѓаат на парни позиции во бројот 717623 е 7 * 7 * 2 = 98.
*/
#include <stdio.h>
int funkcija(int x)
{
    if(x>10)
    {
        return x%10*funkcija(x/100);
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