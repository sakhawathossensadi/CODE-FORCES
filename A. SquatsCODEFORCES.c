#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,cx=0,cX=0,len,mid,min,rm,xflag=0,Xflag=0,count=0;
    char str[222];
    scanf("%d",&n);
    mid=n/2;
    getchar();
    gets(str);
    for(i=0; i<n; i++)
    {
        if(str[i]=='x')
        {
            cx++;
        }
        else
        {
            cX++;
        }
    }
    if(cX>cx)
    {
        min=cx;
        xflag=1;
    }
    else
    {
        min=cX;
        Xflag=1;
    }
    rm=mid-min;
    printf("%d\n",rm);
    if(Xflag==1)
    {
        for(i=0; i<n && count<rm; i++)
        {
            if(str[i]=='x')
            {
                str[i]='X';
                count++;
            }
        }
        puts(str);
    }
    else
    {
        for(i=0; i<n && count<rm; i++)
        {
            if(str[i]=='X')
            {
                str[i]='x';
                count++;
            }
        }
        puts(str);
    }
    return 0;
}
