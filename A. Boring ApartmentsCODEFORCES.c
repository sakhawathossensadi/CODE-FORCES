#include<stdio.h>

int main()
{
    int i,j,t,x,index,val,count;
    int arr[]= {1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};
    scanf("%d",&t);
    for(j=0; j<t; j++)
    {
        scanf("%d",&x);
        for(i=0; i<36; i++)
        {
            if(x==arr[i])
            {
                index=i;
                break;
            }
        }
        count=0;
        for(i=0; i<=index; i++)
        {
            val=arr[i];
            while(val>0)
            {
                val=val/10;
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
