#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,found=0;
    char str[110];
    gets(str);
    len= strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i]=='D')
        {
            if(str[i+1]=='a' && str[i+2]=='n' && str[i+3]=='i' && str[i+4]=='l')
            {
                found++;
                i=i+4;
            }
        }
        else if(str[i]=='O')
        {
            if(str[i+1]=='l' && str[i+2]=='y' && str[i+3]=='a')
            {
                found++;
                i=i+3;
            }
        }
        else if(str[i]=='S')
        {
            if(str[i+1]=='l' && str[i+2]=='a' && str[i+3]=='v' && str[i+4]=='a')
            {
                found++;
                i=i+4;
            }
        }
        else if(str[i]=='A')
        {
            if(str[i+1]=='n' && str[i+2]=='n')
            {
                found++;
                i=i+2;
            }
        }
        else if(str[i]=='N')
        {
            if(str[i+1]=='i' && str[i+2]=='k' && str[i+3]=='i' && str[i+4]=='t' && str[i+5]=='a')
            {
                found++;
                i=i+5;
            }
        }
    }
    if(found==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
