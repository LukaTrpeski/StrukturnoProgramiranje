//Од стандарден влез се чита еден природен број n, по што се читаат n цели броеви. Да се најде најголемата разлика помеѓу два броја, од вака внесените броеви.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,max=0,min=100000,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>max)
        {
            max=a;
        }
        if(a<min)
        {
            min=a;
        }

    }printf("Najgolema razlika: %d",max-min);
}
