#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,lflag=0,clflag=0,slflag=0,spflag=0,dflag=0;
    char str[150];
    gets(str);
    len=strlen(str);
    if(len>=5 && len<=100)
    {
        lflag=1;
    }
    for(i=0;i<len;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            clflag=1;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            slflag=1;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            dflag=1;
        }
        else if(str[i]=='!' || str[i]=='.' || str[i]=='?' || str[i]==',' || str[i]=='_')
        {
            spflag=1;
        }
    }
    if((lflag==1 && clflag==1 && slflag==1 && dflag==1))
    {
        printf("Correct\n");
    }
    else
    {
        printf("Too weak\n");
    }
    return 0;
}
