#include<stdio.h>
int main()
{
    int a,b,min,max,re,res=0;
    scanf("%d %d",&a,&b);
    min=a;
    max=b;
    if(a>b)
    {
        min=b;
        max=a;
    }
    re=max-min;
    if(re>1)
    {
        res=re/2;
    }
    printf("%d %d\n",min,res);
    return 0;
}
