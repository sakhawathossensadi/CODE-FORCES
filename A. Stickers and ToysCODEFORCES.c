#include<stdio.h>
int main()
{
    int i,tc,n,s,t,ans,min,dif1,dif2;
    scanf("%d",&tc);
    for(i=0; i<tc; i++)
    {
        scanf("%d %d %d",&n,&s,&t);
        if((s==n) && (t==n))
        {
            ans=1;
        }
        else
        {
            dif1=n-s;
            dif2=n-t;
            if(dif1>dif2)
            {
                ans=dif1+1;
            }
            else
            {
                ans=dif2+1;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
