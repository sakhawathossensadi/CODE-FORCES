#include<stdio.h>
int main()
{
    int n,x,y,z,i,j,sum=0,flag=0;
    scanf("%d",&n);
    int arr[110][4],res[3]={0};
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<3;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+arr[i][j];
        }
        res[j]=sum;
    }
    for(i=0;i<3;i++)
    {
        if(res[i]!=0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
