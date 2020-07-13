#include <stdio.h>
#include<string.h>
int main()
{
    int i,j,k,len,len1,av,flag=0,index;
    char str1[30],str2[30],str[1100],ch,c;
    gets(str1);
    gets(str2);
    gets(str);
    len1=strlen(str1);
    len=strlen(str);
    for(i=0; i<len; i++)
    {
        flag=0;
        ch=str[i];
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        {
            if(ch>='A' && ch<='Z')
            {
                ch=ch+32;
                flag=1;
            }
            for(j=0; j<len1; j++)
            {
                if(str1[j]==ch)
                {
                    index=j;
                    break;
                }
            }
            if(flag==1)
            {
                c=str2[index];
                c=c-32;
                str[i]=c;
            }
            else
            {
                c=str2[index];
                str[i]=c;
            }
        }
        else
        {
            continue;
        }
    }
    puts(str);
    return 0;
}
