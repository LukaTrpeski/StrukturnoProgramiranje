/*
Во дадена датотека dat.txt да се најде најдолгиот ред во кој има барем 2 цифри. На стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед. Доколку има повеќе такви редови се печати последниот. Се претпоставува дека ниту еден ред на датотеката не е подолг од 100 знаци.

Пример.

Влез: 
dat.txt:
    aaa123aa222aa2aaa23aaaaa22
    aaaaaaaaaaaa 23aaaa
    123 aaa aaa aaa aaa 12345 aaa aaa 2a

Излез:
    123 aaa aaa aaa aaa 12345 aaa aaa 2
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
	FILE *fp=fopen("dat.txt","r");
	char niza[MAX],niza1[MAX];
	int brred,i,j=0,prv,posleden,br=0,finalprv,finalposleden,max=0,k=0;
	while(fgets(niza,MAX,fp)!=NULL)
	{
	    br=0;
	    for(i=0;i<strlen(niza);i++)
	    {
	        if(isdigit(niza[i]))
	            {
	            br++;
	            if(br==1)
	            {prv=i;}
	            posleden=i;
	            }
	    }
	    if(br>=2&&i>=max)
	    {
	        max=i;
	        brred=k;
	        finalprv=prv;
	        finalposleden=posleden;
	    }
	    k++;
	 }
	 FILE *f=fopen("dat.txt","r");
	 while(fgets(niza1,MAX,f)!=NULL)
	 {
	    if(j==brred)
	    {
	        for(i=finalprv;i<=finalposleden;i++)
	        {
	            printf("%c",*(niza1+i));
	        }
	        printf("\n");
	    }
	    j++;
      }       
}