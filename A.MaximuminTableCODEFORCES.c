#include<stdio.h>
int main()
{
    int n,i,j,max=1;
    scanf("%d",&n);
    int arr[100][100];
    for(i=1;i<=n;i++)
    {
        arr[1][i]=1;
    }
    for(i=1;i<=n;i++)
    {
        arr[i][1]=1;
    }
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=n;j++)
        {
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }
    }
    printf("%d\n",arr[n][n]);
    return 0;
}
