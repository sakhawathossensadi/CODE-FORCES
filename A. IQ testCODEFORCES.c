#include<stdio.h>
int main()
{
    int i,n,input,arr[150],res[150],mod,one=0,zero=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&input);
        mod=input%2;
        res[i]=mod;
    }
    for(i=1; i<=n; i++)
    {
        if(res[i]==1)
        {
            one++;
        }
        else
        {
            zero++;
        }
    }
    if(one==1)
    {
        for(i=1; i<=n; i++)
        {
            if(res[i]==1)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    else if(zero==1)
    {
        for(i=1; i<=n; i++)
        {
            if(res[i]==0)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}
