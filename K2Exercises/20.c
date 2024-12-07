/*
Од стаднарден влез се читаат N низи од знаци (стрингови) не подолги од 80 знаци. На почетокот на програмата се читаат два цели броеви:

N - бројот на низи од знаци кои ќе се читаат и
X - поместување.
Секоја од вчитаните низи од знаци треба да се трансформира на тој начин што секоја од малите и големите букви (a-z, A-Z) се заменува со истата буква поместена X места понапред во азбуката (a-z). Ако се надмине опсегот на буквите во азбуката, се продолжува циклично од почетокот на азбуката. Трансформираната низа да се отпечати на СИ.

Трансформацијата да се имплементира со посебна рекурзивна функција.

Пример:

Welcome -> трансформирано со поместување 5 -> Bjqhtrj
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 100
void funkcija(char *niza,int n,int x)
{
    if(n==0)
    {
    if(isalpha(*(niza+n)))
    {   
        if(islower(*(niza+n)))
        {
            if(*(niza+n)+x>=97 && *(niza+n)+x<=122)
                printf("%c",*(niza+n)+x);
            else if(*(niza+n)+x>122)
                printf("%c",*(niza+n)+x-26);
        }
        if(isupper(*(niza+n)))
        {
            if(*(niza+n)+x>=65 && *(niza+n)+x<=90)
                printf("%c",*(niza+n)+x);
            else if(*(niza+n)+x>90)
                printf("%c",*(niza+n)+x-26);
        }
    }
    else
    printf("%c",*(niza+n));
    }
    else
    {
    funkcija(niza,n-1,x);
    if(isalpha(*(niza+n)))
    {   
        if(islower(*(niza+n)))
        {
            if(*(niza+n)+x>='a' && *(niza+n)+x<='z')
                printf("%c",*(niza+n)+x);
            else if(*(niza+n)+x>'z')
                printf("%c",*(niza+n)+x-26);
        }
        if(isupper(*(niza+n)))
        {
            if(*(niza+n)+x>='A' && *(niza+n)+x<='Z')
                printf("%c",*(niza+n)+x);
            else if(*(niza+n)+x>'Z')
                printf("%c",*(niza+n)+x-26);
        }
    }
    else
    printf("%c",*(niza+n));
    }
}
int main()
{
    int n,x,i,c,j;
    char niza[max];
    scanf("%d%d",&n,&x);
    getchar();
    for(i=0;i<n;i++)
    {
        fgets(niza,max,stdin);
        c=strlen(niza);
        funkcija(niza,c-2,x);
        printf("\n");
    }
}