//Да се напише програма во која од дадена датотека со име "input.txt" за секој ред ќе се отпечати бројот на цифри во тој ред, знакот :, па самите цифри подредени според ASCII кодот во растечки редослед. Редовите во датотеката не се подолги од 100 знаци.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100
void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
void sort(int *niza,int k)
{
    int i,j,temp;
    for(i=0;i<k;i++)
        for(j=0;j<k-i-1;j++)
            {
                if(niza[j]>niza[j+1])
                {temp=niza[j];
                niza[j]=niza[j+1];
                niza[j+1]=temp;
                }
            }
}
int main() {
    wtf();
    FILE *fp=fopen("input.txt","r");
    char n[MAX];
    int niza[MAX];
    int i,br=0,k=0;
    while(fgets(n,MAX,fp)!=NULL)
    {
        k=0;
        for(i=0;i<strlen(n);i++)
        {
            if(isdigit(n[i]))
            {br++;
            niza[k]=n[i]-48;
            k++;}
        }
        sort(niza,k);
        printf("%d:",k);
        for(i=0;i<k;i++)
        {
            printf("%d",niza[i]);
        }
        printf("\n");
    }
    return 0;
}
