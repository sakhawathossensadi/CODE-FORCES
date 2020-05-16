#include<stdio.h>
int main()
{
    int i,a,b,c,arr[10],max;
    scanf("%d %d %d",&a,&b,&c);
    arr[0]=(a+b)*c;
    arr[1]=a*(b+c);
    arr[2]=(a*b)+c;
    arr[3]=a+(b*c);
    arr[4]=a*(b*c);
    arr[5]=a+(b+c);
    max=arr[0];
    for(i=1;i<6;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d\n",max);
    return 0;
}
