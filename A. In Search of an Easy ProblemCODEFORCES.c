#include<stdio.h>
int main()
{
    int i,n,opinion,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&opinion);
        if(opinion==1)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("HARD\n");
    }
    else
    {
        printf("EASY\n");
    }
    return 0;
}
