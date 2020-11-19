#include<stdio.h>
#include<string.h>
int main()
{
    int t,l,i,k,len,flag1,flag2,dif,pos,count,z;
    char str[110];
    scanf("%d",&t);
    for(k=0; k<t; k++)
    {
        flag1=0;
        flag2=0;
        count=0;
        scanf("%d",&l);
        getchar();
        gets(str);
        len=strlen(str);
        z=len-1;
        if(len<11)
        {
            printf("NO\n");
        }
        else
        {
            for(i=0;i<len;i++)
            {
                if(str[i]=='8')
                {
                    flag1=1;
                    break;
                }
            }
            for(i=0; i<len; i++)
            {
                if(str[i]=='8')
                {
                    pos=i;
                    dif=z-pos;
                    if(dif>=10)
                    {
                        flag2=1;
                        break;
                    }
                }
            }
            if(flag1==1 && flag2==1)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
