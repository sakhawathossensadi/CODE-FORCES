#include<stdio.h>
int main()
{
    int i,n,m,flag=0;
    scanf("%d %d",&n,&m);
    while(1)
    {
        for(i=1;i<n+1;i++)
        {
            if(m<i)
            {
                flag=1;
                break;
            }
            else
            {
                m=m-i;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    printf("%d\n",m);
    return 0;
}
