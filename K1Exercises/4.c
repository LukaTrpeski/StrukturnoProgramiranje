//Од стандарден влез се читаат знаци се додека не се прочита извичник. Во вака внесениот текст се скриени цели броеви (помали од 100). Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.
#include <stdio.h>
int main()
{
    char c;
    int sum=0,temp=0;
    while((c=getchar())!='!')
    {
        if(c>='0'&&c<='9')
        {
            temp=(temp*10)+c-48;
        }
        else
        {
            sum=sum+temp;
            temp=0;
        }
    }
    printf("%d",sum+temp);
    return 0;
}