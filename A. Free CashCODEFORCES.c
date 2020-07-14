#include<stdio.h>
int main()
{
    int i,n,av=1,count=1,flag=0,cflag=0;
    scanf("%d",&n);
    int arrh[n],arrm[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&arrh[i],&arrm[i]);
    }
    for(i=1;i<n;i++)
    {
        if((arrh[i]==arrh[i-1]) && (arrm[i]==arrm[i-1]))
        {
            count++;
        }
        else
        {
            if(count>av)
            {
                av=count;
                count=1;
                cflag=1;
            }
            count=1;
        }
    }
    if(cflag==0)
    {
        if(count>av)
        {
            av=count;
        }
    }
    if(count>av)
    {
        av=count;
    }
    printf("%d\n",av);
    return 0;
}
