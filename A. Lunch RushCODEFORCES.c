#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k,f,t,max,result=-2000000000,a1,a2,i;
    scanf("%d %d",&n,&k);
    for(i=0; i<n; i++)
    {
        a1=-2000000000;
        a2=-2000000000;
        scanf("%d %d",&f,&t);
        if(t>k)
        {
            a1=f-(t-k);
        }
        else
        {
            a2=f;
        }
        max=a1;
        if(a2>a1)
        {
            max=a2;
        }
        if(max>result)
        {
            result=max;
        }
    }
    printf("%d\n",result);
    return 0;
}
