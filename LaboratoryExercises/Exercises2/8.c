//Да се напише програма каде од тастатура се внесува еден седумцифрен број. Програмата печати DA доколку бројот е специјален, а NE во спротивно. Еден број е специјален доколку за него важи дека е делив со својата прва цифра и не е делив со збирот на последните две или доколку не е делив со својата втора цифра и не е делив со збирот на последните две. Да се внимава на делење со 0, т.е. да се испечати порака Nevaliden broj во таков случај.

#include <stdio.h>

int main()
{
    int n,prva,vtora,pretposledna,posledna;
    scanf("%d",&n);
    prva=n/1000000;
    vtora=n/100000%10;
    pretposledna=n%100/10;
    posledna=n%10;
    if(prva!=0 && vtora!=0 &&(pretposledna+posledna)!=0)
    {
        if((n%prva==0 && n%(pretposledna+posledna)!=0)||(n%vtora!=0&& n%(pretposledna+posledna)))
        {
        printf("DA");
        }
        else
        {
        printf("NE");
        }
    }
    else
    {
        printf("Nevaliden broj");
    }
return 0;
}