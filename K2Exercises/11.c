/*
Во датотеката podatoci.txt се запишани редови со низи од знаци (секој не подолг од 80 знаци).

Од стандарден влез се читаат два знака z1 и z2. Да се напише програма со која на стандарден излез ќе се испечатат поднизите од секој ред од датотеката составени од знаците што се наоѓаат меѓу z1 и z2 (без нив). Секоја подниза се печати во нов ред.

Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2, знакот z1 секогаш се наоѓа пред знакот z2, а меѓу z1 и z2 секогаш има барем еден знак.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void wf() {
    FILE *f = fopen("podatoci.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();
    getchar();
    int i,j, flag1;
    char z1, z2, c[81];
    scanf("%c%c",&z1,&z2);
    FILE *f = fopen("podatoci.txt", "r");
    while(fgets(c,81,f)!=NULL) {
        flag1=1;
        for(i=0; ;i++){
            if(flag1==1)
        {
            if(c[i]==z1){
                flag1=0;
                for(j=i+1; ;j++) {
                    if(c[j]==z2)
                        break;
                    printf("%c",c[j]);
                }
             printf("\n");
        }

    }else
    break;
    }
    }
    fclose(f);
    return 0;
}