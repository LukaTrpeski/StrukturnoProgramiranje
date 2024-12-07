/*
Да се напишат следните функции за работа со низи од децимални броеви:

Функцијата double max (double * niza, int n), што како резултат ќе го врати максимумот во низата niza со n елементи.
Функцијата double min (double * niza, int n), што како резултат ќе го врати минимумот во низата niza со n елементи.
Функцијата void normalize (double * niza, int n), што ќе го нормализира секој елемент од низата по следната формула:

x = (x-min(niza)) / (max(niza) - min(niza))

Функција void sort (double * niza, int n) што ќе ја сортира низата во опаѓачки редослед!

Да не се менува main функцијата и да не се користи операторот за пристап до елемент на низа [ ]!
*/
#include<stdio.h>

float max(float *niza,int n)
{
    int i;
    float max=*niza;
    for(i=0;i<n;i++)
    {
        if(*(niza+i)>max)
        {
            max=*(niza+i);
        }
    }
    return max;
}
float min(float*niza,int n)
{
    int i;
    float min=*niza;
    for(i=0;i<n;i++)
    {
        if(*(niza+i)<min)
        {
            min=*(niza+i);
        }
    }
    return min;
}
void normalize(float *niza,int n)
{
    int i;
    float x=max(niza,n);
    float y=min(niza,n);
    for(i=0;i<n;i++)
    {
        *(niza+i) = (*(niza+i)-y) / (x - y);
    }
}
void sort(float *niza, int n)
{
    int i,j;
    float temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
        if(*(niza+j)<*(niza+j+1))
        {
            temp=*(niza+j);
            *(niza+j)=*(niza+j+1);
            *(niza+j+1)=temp;
        }
        }
    }
}
int main () {
    
    float niza [200];
    int i,n;
    
    scanf("%d", &n);
    
    for (i=0;i<n;i++) {
        scanf("%f", &niza[i]);
        
    }
    printf("MAX -> %.3f\n", max(niza,n));
    printf("MIN -> %.3f\n", min(niza,n));
    
    normalize(niza,n);
    sort(niza,n);
     
     for (i=0;i<n;i++) {
        printf("%.3f ", niza[i]);
        
    }
    
    return 0;

}