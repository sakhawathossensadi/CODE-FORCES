#include<stdio.h>
#include<string.h>
int main()
{
    int i,len1,len2,len3,arr[26]={0},ar[26]={0},flag=0;
    char str1[111],str2[111],str3[111];
    gets(str1);
    gets(str2);
    gets(str3);
    len1=strlen(str1);
    len2=strlen(str2);
    len3=strlen(str3);
    for(i=0;i<len1;i++)
    {
        ++arr[str1[i]-65];
    }
    for(i=0;i<len2;i++)
    {
        ++arr[str2[i]-65];
    }
    for(i=0;i<len3;i++)
    {
        ++ar[str3[i]-65];
    }
    for(i=0;i<26;i++)
    {
        if(arr[i]!=ar[i])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}
