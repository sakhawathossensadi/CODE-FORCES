#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,t,count,len,length,dif;
    char str[110];
    scanf("%d",&t);
    getchar();
    for(k=0;k<t;k++)
    {
        count=0;
        scanf("%d",&len);
        getchar();
        gets(str);
        for(i=len-1;i>=0;i--)
        {
            if(str[i]==')')
            {
                count++;
            }
            else
            {
                break;
            }
        }
        dif=len-count;
        if(dif<count)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
