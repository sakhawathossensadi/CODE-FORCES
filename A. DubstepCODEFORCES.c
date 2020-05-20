#include <stdio.h>
#include<string.h>
int main()
{
    int i,len,j,flag=0;
    char str[220];
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            i=i+2;
            if(flag==1)
            {
                printf(" ");
            }
        }
        else
        {
            printf("%c",str[i]);
            flag=1;
        }
    }
    return 0;
}
