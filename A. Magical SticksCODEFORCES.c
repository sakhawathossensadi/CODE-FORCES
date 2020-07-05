#include<stdio.h>
int main()
{
    int t,n,i,ans;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            ans=n/2;
        }
        else
        {
            ans=n/2;
            ans=ans+1;
        }
        printf("%d\n",ans);
    }
    return 0;
}
