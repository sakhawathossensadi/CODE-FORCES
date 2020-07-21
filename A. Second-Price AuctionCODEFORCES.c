#include<stdio.h>
int main()
{
    int i,j,temp,n,price,arr[1111],ar[1111],ans,max,pos;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&price);
        arr[i]=price;
        ar[i]=price;
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        for(j=i;j>0 && temp<arr[j-1];j--)
        {
            arr[j]=arr[j-1];
        }
        arr[j]=temp;
    }
    max=arr[n-1];
    ans=arr[n-2];
    for(i=0;i<n;i++)
    {
        if(ar[i]==max)
        {
            pos=i+1;
            break;
        }
    }
    printf("%d %d\n",pos,ans);
    return 0;
}
