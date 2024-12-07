/*
Да се напише функција letterFrequency (char * text, char letter) што за даден letter ќе испечати информации која е релативната фреквенција на појавување на таа буква во текстуалната низа text (како мала и како голема буква). Текстот е ограничен на максимум 1000 карактери.

Релативната фреквенција на буква се пресметува како количник од бројот на појавувања на таа буква и вкупниот број на букви во текстот.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 1000
void letterFrequency(char *text,char letter)
{
    int i;
    float count=strlen(text);
    float count1=0;
    float count2=0;
    for(i=0;i<count;i++)
    {
        if(isupper(letter))
        {letter=tolower(letter);}
        if(*(text+i)==letter)
        {
            count1++;
        }
        if(*(text+i)==letter-32)
        {
            count2++;
        }
    }
    printf("%c -> %.3f%%\n",letter,count1/(count+1)*100);
    printf("%c -> %.3f%%",letter-32,count2/(count+1)*100);
}
int main()
{
    char a[MAX],b,c;
    int i=0;
    while((b=getchar())!='\n')
        {
        *(a+i)=b;
        i++;
        }
    *(a+i)='\0';
    scanf("%c",&c);
    letterFrequency(a,c);
}
