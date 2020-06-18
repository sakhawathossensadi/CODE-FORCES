#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i,j,temp,max,val,flag=0,flag1=0,low,k,dif;
    int arr[3300];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1; i<n; i++)
    {
        temp=arr[i];
        for(j=i; j>0 && temp<arr[j-1]; j--)
        {
            arr[j]=arr[j-1];
        }
        arr[j]=temp;
    }
    dif=abs(0-arr[0]);
    if(dif>1)
    {
        printf("1\n",val);
        flag1=1;
    }
    else
    {
        for(i=0;i<n-1;i++)
        {
            dif=abs(arr[i]-arr[i+1]);
            if(dif>1)
            {
                val=arr[i]+1;
                printf("%d\n",val);
                flag=1;
                break;
            }
        }
    }
    if(flag==0 && flag1==0)
    {
        val=arr[n-1];
        val=val+1;
        printf("%d\n",val);
    }
    return 0;
}
