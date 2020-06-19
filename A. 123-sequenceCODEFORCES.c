#include<stdio.h>
int main()
{
    int i,n,max,ele,one=0,two=0,three=0;
    int arr[3]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ele);
        if(ele==1)
        {
            arr[0]=arr[0]+1;
        }
        else if(ele==2)
        {
            arr[1]=arr[1]+1;
        }
        else
        {
            arr[2]=arr[2]+1;
        }
    }
    max=0;
    for(i=0;i<3;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d\n",n-max);
    return 0;
}
