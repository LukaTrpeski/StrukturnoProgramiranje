/*
Дадена е текстуална датотека text.txt.

Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во датотеката. Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања на паровите самогласки.

Пример: за датотеката:

IO is short for Input Output
medioio medIo song
излез:

io
ou
io
oi
io
io
6
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100
void writeToFile() {
  FILE *f = fopen("text.txt", "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}
int Samoglaska(char c)
{c=tolower(c);
switch (c){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
return 1;
default:
return 0;}
}

int main() {
    
  writeToFile();
   FILE *f = fopen("text.txt", "r");
   int n, br=0;
   char c[MAX], s[2];
   while((fgets(c,MAX,f))!=NULL)
   {n=strlen(c);
   for(int i=0; i<n-1; i++)
   {
    if(Samoglaska(c[i])&&Samoglaska(c[i+1]))
    {
        s[0]=c[i];
        s[1]=c[i+1];
        printf("%c%c\n",tolower(s[0]),tolower(s[1]));
        br++;
    }
    
    }
   }
   printf("%d",br);
  
    


  return 0;
}
