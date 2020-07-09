#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,s,a[110],c=0,i,j;
    scanf("%d %d",&n,&s);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1; i<=n; i++)
    {
        if(a[i]<=s)
        {
            c++;
        }

        else break;
    }
    if(c==n)
    {
        printf("%d\n",c);
        return 0;
    }
    {
        for(j=n; j>=1; j--)
        {
            if(a[j]<=s)
            {
                c++;
            }

            else break;
        }
    }
    printf("%d\n",c);
    return 0;
}
