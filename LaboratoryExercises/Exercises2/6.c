/*
За дадени освоени поени пишете ја оценката која го следи студентот според дадените табели.

0-50 = 5

51-60 = 6

61-70 = 7

71-80 = 8

81-90 = 9

91-100 = 10

Покрај оценките да се испечатат и знаците + и – во зависност од вредноста на последната цифра на поените:

1 - 3 = "-"

4 - 7 = " "

8-0 = "+"
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int poeni;
    scanf("%d",&poeni);
    if(poeni>100 || poeni<0)
    {
        printf("Nevalidna vrednost za poeni!");
    }
    else if(poeni<=50)
    {
        printf("Ocenka 5");
    }
    else if(poeni<=60)
    {
        printf("Ocenka 6");
    }
    else if(poeni<=70)
    {
        printf("Ocenka 7");
    }
    else if(poeni<=80)
    {
        printf("Ocenka 8");
    }
    else if(poeni<=90)
    {
        printf("Ocenka 9");
    }
    else
    {
        printf("Ocenka 10");
    }
    if(poeni<=100 && poeni>=50)
       {
        if(poeni%10>=1 && poeni%10<=3)
        {
        printf("-");
        }
        else if(poeni%10>=4 && poeni%10<=7)
        {
        printf(" ");
        }
        else
        {
        printf("+");
        }
       }
    return 0;
}

