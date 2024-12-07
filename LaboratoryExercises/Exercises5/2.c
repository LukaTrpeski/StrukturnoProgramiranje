//Да се напише програма која ќе прочита два природни броја. Програмата треба да провери дали сите цифри од првиот број се појавуваат во вториот број. Ако овој услов е исполнет, програмата печати DA, во спротивно NE.
#include <stdio.h>

int main()
{
    int i,j,a,b,br=0,br1=0,br2=0;
    scanf("%d%d",&a,&b);
    int cifria[100];
    int cifrib[100];
    for(i=a;i!=0;i/=10)
    {
        cifria[br]=i%10;
        br++;
    }
    for(i=b;i!=0;i/=10)
    {
        cifrib[br1]=i%10;
        br1++;
    }
    for(i=0;i<br;i++)
    {  
        for(j=0;j<br1;j++)
        {
            if(cifria[i]==cifrib[j])
            {br2++;
            break;}
        }
    }
    if(br2==br)
    {printf("DA");}
    else
    {printf("NE");}
}
