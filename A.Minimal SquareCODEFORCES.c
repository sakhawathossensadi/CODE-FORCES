#include<stdio.h>
#include<math.h>
int main()
{
    int t,a,b,i,j,mul,result,flag1,flag2,aa,bb,r1,r2,elseblockflag=0,root,min,max,temp;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        elseblockflag=0;
        flag1=0;
        flag2=0;
        scanf("%d %d",&a,&b);
        max=a;
        if(b>a)
        {
            max=b;
        }
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        result=2*(a*b);
        if(a==b)
        {
            a=a*2;
            mul=a*a;
            printf("%d\n",mul);
            elseblockflag=1;
        }
        else if(elseblockflag==0)
        {
            aa=a*2;
            r1=aa*aa;
            if(r1>=result)
            {
                flag1=1;
            }
            bb=b*2;
            r2=bb*bb;
            if(flag1==1)
            {
                flag2=1;
            }
            if(flag1==1 && flag2==1)
            {
                if(r1<r2)
                {
                    printf("%d\n",r1);
                }
                else
                {
                    printf("%d\n",r2);
                }
            }
        }
        j=1;
        mul=0;
        while(1)
        {
            mul=j*j;
            root=sqrt(mul);
            if(mul>=result && root>=max)
            {
                break;
            }
            j++;
        }
        if(flag1==0 && flag2==0 && elseblockflag==0)
        {
            printf("%d\n",mul);
        }
    }
    return 0;
}
