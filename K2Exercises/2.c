/*
Во дадена датотека “broevi.txt” се запишани повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1) што означува колку броеви следуваат по него во тој ред. Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита 0.
*/
#include <stdio.h>
#include <string.h>
#define MAX 100

//ne menuvaj!
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
int funkcija(int n)
{
    if(n<10)
    return n;
    else
    return funkcija(n/10);
}

int main()
{
    wtf();
    int n,a[100],i,q,maxbr,max=0;
    FILE *f = fopen("broevi.txt","r");
    while(fscanf(f,"%d",&n))
    {
        if(n==0)
            break;
        else
        {
            for(i=0;i<n;i++)
            {
                fscanf(f,"%d",&a[i]);
            }
            max=0;
            for(i=0;i<n;i++)
            {
                q=funkcija(a[i]);
                if(q>max)
                {max=q;
                 maxbr=a[i];}
            }
        }
        printf("%d\n",maxbr);    
    }
    fclose(f);
}