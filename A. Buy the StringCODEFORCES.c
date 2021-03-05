#include<stdio.h>
#include<string.h>
int main()
{
    char str[1010];
    int t,n,c0,c1,h,i,j,k,ones,zeros,val,val1,val2;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        ones=0;
        zeros=0;
        scanf("%d %d %d %d",&n,&c0,&c1,&h);
        getchar();
        gets(str);
        for(i=0;i<n;i++)
        {
            if(str[i]=='0')
            {
                zeros++;
            }
            else
            {
                ones++;
            }
        }
        val=(ones*c1)+(zeros*c0);
        val1=(zeros*h)+(n*c1);
        val2=(ones*h)+(n*c0);
        if(val<val1)
        {
            if(val<val2)
            {
                printf("%d\n",val);
            }
            else
            {
                printf("%d\n",val2);
            }
        }
        else
        {
            if(val1<val2)
            {
                printf("%d\n",val1);
            }
            else
            {
                printf("%d\n",val2);
            }
        }
    }
    return 0;
}
