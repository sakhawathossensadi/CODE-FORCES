#include<stdio.h>

int main()
{
    int i,j,k,t,ele,n,count;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        int arr[60];
        count=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=1;i<n;i++)
        {
            ele=arr[i];
            for(j=i;j>0 && arr[j-1]>ele;j--)
            {
                arr[j]=arr[j-1];
            }
            arr[j]=ele;
        }
        for(i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]<=1)
            {
                count++;
            }
        }
        if(count==n-1)
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
