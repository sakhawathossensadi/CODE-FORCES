#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,flag=0;
    char str[2222][5],c;
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%c",&str[i][j]);
        }
        getchar();
    }
    for(i=0; i<n; i++)
    {
        if((str[i][0]=='O'&&str[i][1]=='O'))
        {
            str[i][0]='+';
            str[i][1]='+';
            flag=1;
            break;
        }
        if((str[i][3]=='O'&&str[i][4]=='O'))
        {
            str[i][3]='+';
            str[i][4]='+';
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("YES\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<5;j++)
            {
                printf("%c",str[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
