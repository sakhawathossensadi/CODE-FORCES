#include<stdio.h>
int main()
{
    int i,x1,x2,x3,x4,arr[5],max=0;
    scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
    arr[0]=x1;
    arr[1]=x2;
    arr[2]=x3;
    arr[3]=x4;
    for(i=0;i<4;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(i=0;i<4;i++)
    {
        if(arr[i]!=max)
        {
            printf("%d ",max-arr[i]);
        }
    }
    printf("\n");
    return 0;
}
