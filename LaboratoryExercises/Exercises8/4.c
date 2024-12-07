/*
Да се напише функција revertString(char *a, char *b, char *comparator) која ќе ги преврти стринговите a и b и потоа ќе врати еден од нив во зависност од стрингот comparator, кој доколку има вредност pogolem се враќа лексикографски поголемиот или доколку има вредност pomal се враќа лексикографски помалиот. Доколку двата стрингови се еднакви, не е битно кој стринг ќе се врати.

Во главниот дел од програмата треба N пати да се прочитаат 3 стрингови и за нив да се испечати резулататот од revertString функцијата.

Забелешка: За стрингот comparator се смета дека не е case-sensitive. На пример за вредностите poGolEm и POGoleM функцијата треба да врати ист резултат. Доколку пак comparator има непозната вредност да се врати стрингот "Invalid comparator".
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 1000

void revertString(char *a,char *b,char *comparator)
{
    int d=strlen(a);
    int f=strlen(b);
    int g=strlen(comparator);
    char s1[6]="pomal";
    char s2[8]="pogolem";
    int i,l;
    char temp;
    for(i=0;i<d/2;i++)
    {
        
        temp=*(a+i);
        *(a+i)=*(a+d-i-1);
        *(a+d-i-1)=temp;
    }
    for(i=0;i<f/2;i++)
    {
        temp=*(b+i);
        *(b+i)=*(b+f-i-1);
        *(b+f-i-1)=temp;
    }
    for(i=0;i<g;i++)
    {
        *(comparator+i)=tolower(*(comparator+i));
    }
    int p=0;
    while(strstr(comparator,s1))
       {
           if(*(a+p)>*(b+p))
            {
                for(l=0;l<f;l++)
                {
                
                printf("%c",*(b+l));
                }
                break;
            }
            else if(*(a+p)<*(b+p))
            {
                for(l=0;l<d;l++)
                {
                
                printf("%c",*(a+l));
                }
                break;
            }
            else
            {
                p++;}
       }
    int q=0;
    while(strstr(comparator,s2))
       {
           if(*(a+q)<*(b+q))
            {
                for(l=0;l<f;l++)
                {
                    
                printf("%c",*(b+l));
                }
                break;
            }
            else if(*(a+q)>*(b+q))
            {
                for(l=0;l<d;l++)
                {
                
                printf("%c",*(a+l));
                }
                break;
            }
            else 
            {
                q++;
            }
       }
    if(*comparator!=*s1 && *comparator!=*s2)
    {
        printf("Invalid comparator");
    }

}
int main()
{
    int i,n,u,y,t;
    scanf("%d",&n);
    getchar();
    char a[MAX],b[MAX],comparator[MAX],c;
    for(i=0;i<n;i++)
    {
        u=0,y=0,t=0;
        while((c=getchar())!='\n')
        {
            *(a+u)=c;
            u++;
        }
        *(a+u)='\0';
        while((c=getchar())!='\n')
        {
            *(b+y)=c;
            y++;
        }
        *(b+y)='\0';
        while((c=getchar())!='\n')
        {
            *(comparator+t)=c;
            t++;
        }
        *(comparator+t)='\0';
        revertString(a,b,comparator);
        printf("\n");
    }
    return 0;
}