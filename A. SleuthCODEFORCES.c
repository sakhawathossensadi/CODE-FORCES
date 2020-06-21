#include<stdio.h>
#include<string.h>
int main()
{
    int i,len;
    char ch,str[110];
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            ch=str[i];
        }
    }
    if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u' || ch=='Y' || ch=='y')
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
