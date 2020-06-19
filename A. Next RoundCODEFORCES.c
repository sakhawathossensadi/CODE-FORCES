#include<stdio.h>
int main()
{
    int i,n,k,max,count=0;
    scanf("%d %d",&n,&k);
    int arr[200];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[k];
    if(max==0)
    {
        for(i=1;i<=n;i++)
        {
            if(arr[i]>max)
            {
                count++;
            }
        }
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(arr[i]>=max)
                {
                    count++;
                }
        }
    }
    printf("%d\n",count);
    return 0;
}
