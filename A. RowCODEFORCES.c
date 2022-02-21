#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,flag=0,count1=0,count2=0,fl,flag2=0,total=0,total2=0;
    scanf("%d",&n);
    getchar();
    char str[n+2],ov;
    char s[n+2];
    gets(str);
    for(i=0; i<n; i++)
    {
        s[i] = str[i];
    }
    s[i] = '\0';
    for(i=0; i<n; i++)
    {
        if(str[i]=='1' && str[i+1]=='1')
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        for(i=0; i<n; i++)
        {
            s[i] = str[i];
            if(str[i]=='1')
            {
                total++;
            }
        }
        for(i=0; i<n; i++)
        {
            fl=0;
            ov = str[i];
            if(str[i]=='0')
            {
                s[i]='1';
            }
            for(j=0; j<n; j++)
            {
                if(s[j]=='1' && s[j+1]=='1')
                {
                    fl=1;
                    break;
                }
            }
            if(fl==1)
            {
                s[i]= ov;
            }
        }
        for(i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                total2++;
            }
        }
        if(total<total2)
        {
            flag2=1;
        }
    }
    if(flag==1)
    {
        printf("NO\n");
    }
    else if (flag==0 && flag2==1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}
