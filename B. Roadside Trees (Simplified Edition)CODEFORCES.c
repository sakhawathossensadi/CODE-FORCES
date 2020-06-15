#include<stdio.h>
int main()
{
    int i,t,time=0,jump=1,eat=1,pre,dif;
    scanf("%d",&t);
    int arr[t+100];
    for(i=1;i<=t;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=t;i++)
    {
        if(i==1)
        {
            time=time+arr[i]+eat;
            pre=arr[i];
        }
        else
        {
            if(arr[i]==pre)
            {
                time=time+eat;
                pre=arr[i];
            }
            else if(arr[i]>pre)
            {
                dif=arr[i]-pre;
                time=time+dif+eat;
                pre=arr[i];
            }
            else
            {
                dif=pre-arr[i];
                time=time+dif+eat;
                pre=arr[i];
            }
        }
        if(i!=t)
        {
            time=time+jump;
        }
    }
    printf("%d\n",time);
    return 0;
}
