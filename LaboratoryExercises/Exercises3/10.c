//Да се напише програма во која во даден опсег на природни броеви [m,n], ќе се најдат и отпечатат во нов ред сите броеви за кои важи дека збирот на бројот со неговата слика(број кој ги има истите цифри, но во обратен редослед) е помал или еднаков на двојната вредност на бројот. На крај да се отпечати и бројот на вакви броеви.
#include <stdio.h>
int main()
{
  int a,b,i,n=0,k=0,j;
  scanf("%d%d",&a,&b);
  for(i=a;i<=b;i++)
  {

    for(j=i;j!=0;j/=10)
    {
    n=n*10;
    n=n+j%10;
    }
    if(i+n<=2*i)
    {
        printf("%d\n",i);
        k++;
    }
    n=0;
  }
  printf("Vkupno: %d",k);
  return 0;
}
