#include<stdio.h>
#include<string.h>
int main()
{
    int len,i,flag=0,j=0;
    char str[110],str1[110],rev[110];
    gets(str);
    gets(str1);
    len=strlen(str);
    for(i=len-1;i>=0;i--)
    {
        rev[j]=str[i];
        j++;
    }
    rev[j]='\n';
    for(i=0;i<len;i++)
    {
        if(rev[i]!=str1[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
