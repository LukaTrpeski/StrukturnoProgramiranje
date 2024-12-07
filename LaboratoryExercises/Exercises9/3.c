/*
Да се напише програма која што од дадена влезна датотека "text.txt" ќе испечати колку зборови има во секој ред, како и ќе испечати просечен број на зборови во редовите во датотеката. Во рамките на секој ред, кои било два збора се разделени точно со едно празно место.

Дополнително да се испечати редот со најголем број на зборови во него, на начин што секоја мала буква ќе биде голема, а секоја голема ќе биде мала.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 200

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile();
    FILE *f = fopen("text.txt", "r");
    char c, a[MAX][MAX];
    int zboroviRed,przMesta=0,suma=0,i=0,najZborovi=0,najdolgRed,j=0;
    while((c=fgetc(f))!=EOF) {
        while((c=fgetc(f))!='\n')
        {
            if(c==' ')
            {
            przMesta++;
            }
        }
        zboroviRed=przMesta+1;
        printf("%d\n",zboroviRed);
        suma+=zboroviRed;
        przMesta=0;
        i++;
        if(najZborovi<zboroviRed)
        {
        najZborovi=zboroviRed;
        najdolgRed=i;
        }
    }
    printf("%.2f\n",(float)suma/i);
    FILE *d = fopen("text.txt", "r");
    while(j!=i-1){
    while((c=fgetc(d))!='\n')
    {
        if(j==najdolgRed-1)
        {
        
            if(islower(c))
            {
            printf("%c",toupper(c));
            }
            else if(isupper(c))
            {
            printf("%c",tolower(c));
            }
            else
            {
            printf("%c",c);
            }
        }
    }j++;
    }
        
    fclose(f);
}