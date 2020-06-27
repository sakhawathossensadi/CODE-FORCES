#include<stdio.h>
int main()
{
    int n1,n2,k1,k2,count1=0,count2=0;
    scanf("%d %d %d %d",&n1,&n2,&k1,&k2);
    while(n1>0)
    {
        n1=n1-1;
        count1++;
    }
    while(n2>0)
    {
        n2=n2-1;
        count2++;
    }
    if(count1>count2)
    {
        printf("First\n");
    }
    else if(count2>count1)
    {
        printf("Second\n");
    }
    else
    {
        printf("Second\n");
    }
    return 0;
}
