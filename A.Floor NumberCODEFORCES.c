#include<stdio.h>
int main()
{
    int i,j,num=1,t,n,x,u,count,section,flag=0,stop=1;
    scanf("%d",&t);
    for(j=0; j<t; j++)
    {
        count=1;
        num=1;
        int apptnum[1100];
        scanf("%d %d",&n,&x);
        for(i=0; i<n; i++)
        {
            apptnum[i]=num;
            num++;
        }
        if(n<=2)
        {
            printf("%d\n",count);
        }
        else
        {
            flag=0;
            stop=1;
            u=2;
            while(stop)
            {
                section=x;
                while(section>0)
                {
                    if(apptnum[u]==n)
                    {
                        flag=1;
                        break;
                    }
                    else
                    {
                        section--;
                        u++;
                    }
                }
                if(flag==1)
                {
                    stop=0;
                }
                else
                {
                    count=count+1;
                }
            }
            printf("%d\n",count+1);
        }
    }
    return 0;
}
