#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len,len1;
    char ch,str[111],str1[31]= {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    scanf("%c",&ch);
    getchar();
    gets(str);
    len=strlen(str);
    if(ch=='R')
    {
        for(i=0; i<len; i++)
        {
            for(j=0;j<30;j++)
            {
                if(str[i]==str1[j])
                {
                    printf("%c",str1[j-1]);
                }
            }
        }
        printf("\n");
    }
    else
    {
        for(i=0; i<len; i++)
        {
            for(j=0;j<30;j++)
            {
                if(str[i]==str1[j])
                {
                    printf("%c",str1[j+1]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
