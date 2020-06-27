#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,m,k,i,position1=1000,position2=1000,dif,dif1,min,flag=0;
    int arr[110];
    scanf("%d %d %d",&n,&m,&k);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    if(m==1)
    {
        for(i=2; i<=n; i++)
        {
            if(arr[i]<=k && arr[i]!=0)
            {
                position1=i;
                break;
            }
        }
        dif=abs(position1-m);
        printf("%d\n",dif*10);
    }
    else if(m==n)
    {
        for(i=n-1; i>=1; i--)
        {
            if(arr[i]<=k && arr[i]!=0)
            {
                position1=i;
                break;
            }
        }
        dif=abs(m-position1);
        printf("%d\n",dif*10);
    }
    else
    {
        for(i=m-1; i>=1; i--)
        {
            if(arr[i]<=k && arr[i]!=0)
            {
                position1=i;
                flag=1;
                break;
            }
        }
        for(i=m+1; i<=n; i++)
        {
            if(arr[i]<=k && arr[i]!=0)
            {
                position2=i;
                break;
            }
        }
        if(flag==1)
        {
            dif=abs(m-position1);
            dif1=abs(position2-m);
            if(dif>dif1)
            {
                min=dif1;
            }
            else
            {
                min=dif;
            }
            printf("%d\n",min*10);
        }
        else
        {
            dif=abs(position2-m);
            printf("%d\n",dif*10);
        }
    }
    return 0;
}
