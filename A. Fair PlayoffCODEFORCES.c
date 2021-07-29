#include<stdio.h>

int main()
{
    int t,i,j,k,p1s,p2s,p1p,p2p,flag1,flag2,arr[4];
    scanf("%d",&t);
    for(k=0; k<t; k++)
    {
        flag1=0;
        flag2=0;
        for(i=0; i<4; i++)
        {
            scanf("%d",&arr[i]);
        }
        if(arr[0]>arr[1])
        {
            p1s=arr[0];
            p1p=0;
        }
        else
        {
            p1s=arr[1];
            p1p=1;
        }
        if(arr[2]>arr[3])
        {
            p2s=arr[2];
            p2p=2;
        }
        else
        {
            p2s=arr[3];
            p2p=3;
        }
        for(i=0;i<=1;i++)
        {
            if(i!=p1p)
            {
                if(arr[i]>p2s)
                {
                    flag1=1;
                }
            }
        }
        for(i=2;i<=3;i++)
        {
            if(i!=p2p)
            {
                if(arr[i]>p1s)
                {
                    flag2=1;
                }
            }
        }
        if(flag1 == 0 && flag2 == 0 )
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
