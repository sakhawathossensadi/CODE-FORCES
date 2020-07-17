#include<stdio.h>
int main()
{
    int i,n,cookies,sum=0,arr[110],count=0,sub;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&cookies);
        sum=sum+cookies;
        arr[i]=cookies;
    }
    for(i=0;i<n;i++)
    {
        sub=sum-arr[i];
        if(sub%2==0)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
