/*
Да се напише програма која што од датотека со име "text.txt" ќе ги одреди и ќе ги испечати на стандарден излез:

релативната фреквенција на сите мали букви
релативната фреквенција на сите големи букви
Релативната фреквенција на даден(и) карактер(и) се пресметува како количник на вкупното појавување на тој/тие карактер/и со вкупниот број на карактери во текстот (да се игнорираат празните места и специјалните знаци).

Да не се менува функцијата writeToFile().
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
    char c;
    int br1=0;
    int br2=0;
    int br3=0;
    while((c=fgetc(f))!=EOF) 
    {
        if(isalpha(c))
        {
            br1++;
            if(islower(c))
            {       
                br2++;
            }
            if(isupper(c))
            {
                br3++;
            }
        }
    }
    printf("%.4f\n%.4f\n",(float)br3/br1,(float)br2/br1);
}
    