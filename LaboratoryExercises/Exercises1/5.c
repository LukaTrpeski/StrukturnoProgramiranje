/*Да се напише програма која за дадена сума на пари, ќе испечати со колку најмалку банкноти и монети може да се исплати. На влез се чита еден цел број. На излез се печатат 9 редови, по колку банкноти или монети од секој апоен ни се потребни за да ја исплатиме сумата. Пример 1583 денари, најдобро е да се исплати како:

0*5000

1*1000

1*500

0*100

1*50

3*10

0*5

1*2

1*1
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d*5000\n",n/5000);
    printf("%d*1000\n",n%5000/1000);
    printf("%d*500\n",n%5000%1000/500);
    printf("%d*100\n",n%5000%1000%500/100);
    printf("%d*50\n",n%5000%1000%500%100/50);
    printf("%d*10\n",n%5000%1000%500%100%50/10);
    printf("%d*5\n",n%5000%1000%500%100%50%10/5);
    printf("%d*2\n",n%5000%1000%500%100%50%10%5/2);
    printf("%d*1\n",n%5000%1000%500%100%50%10%5%2/1);
    return 0;
}
