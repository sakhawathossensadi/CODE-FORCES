#include<stdio.h>
#include<string.h>

int main()
{
    char str[110],p=0,s=0,i,len,res;

    gets(str);
    len = strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='-')
        {
            s++;
        }
        else
        {
            p++;
        }
    }
    if(p==0)
    {
        printf("YES\n");
        return 0;
    }
    res =  s%p;if(res==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
