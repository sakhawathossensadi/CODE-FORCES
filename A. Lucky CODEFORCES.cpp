#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int t,i,j,sum1=0, sum2=0,sum =0,len,value;
    char str[10];
    scanf("%d",&t);
    getchar();
    for(j=0;j<t;j++)
    {
        sum1=0;
        sum2=0;
        gets(str);
        len = strlen(str);
        for(i=0;i<3;i++)
        {
            value = str[i];
            sum1 = sum1+(value-48);
        }
        for(i=3;i<6;i++)
        {
            value = str[i];
            sum2 = sum2+(value-48);
        }
        if(sum1 == sum2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
