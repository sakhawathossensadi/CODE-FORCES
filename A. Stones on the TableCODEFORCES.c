#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    getchar();
    char str[100];
    gets(str);
    for(i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
