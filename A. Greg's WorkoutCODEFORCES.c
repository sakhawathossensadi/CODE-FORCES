#include<stdio.h>
int main()
{
    int n,arr[50],i,ch=0,bi=0,ba=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(i%3==1)
        {
            ch=ch+arr[i];
        }
        else if(i%3==2)
        {
            bi=bi+arr[i];
        }
        else
        {
            ba=ba+arr[i];
        }
    }
    if(ch>bi && ch>ba)
    {
        printf("chest\n");
    }
    else if(bi>ch && bi>ba)
    {
        printf("biceps\n");
    }
    else
    {
        printf("back\n");
    }
    return 0;
}
