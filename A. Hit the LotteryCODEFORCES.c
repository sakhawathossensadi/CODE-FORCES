#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c=0,i,n;
    int a[5]={100,20,10,5,1};
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        while(a[i]<=n)
        {
            c++;
            n=n-a[i];
        }
    }
    printf("%d\n",c);
    return 0;
}
