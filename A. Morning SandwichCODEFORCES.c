#include <stdio.h>

int main()
{
    int t,b,c,h,layer,val,n_val,c_flag,i;
    layer = 0;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        layer = 0;
        scanf("%d %d %d",&b,&c,&h);
        val = c+h;
        n_val = val+1;
        if(b>n_val)
        {
            layer = n_val+val;
        }
        else
        {
            int i=0;
            while(1)
            {
                c_flag=0;
                b=b-1;
                layer++;
                if(b == 0)
                {
                    break;
                }
                if(c>0)
                {
                    c=c-1;
                    c_flag=1;
                    layer++;
                }
                if(c_flag == 0 && h>0)
                {
                    h=h-1;
                    layer++;
                }

            }
        }
        printf("%d\n",layer);
    }

    return 0;
}
