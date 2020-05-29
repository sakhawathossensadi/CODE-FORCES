#include<stdio.h>
int main()
{
    int n,m,i,j,k,l,rowflag,columnflag,count,value,flag=1;

    int arr[104][104];
    while(scanf("%d %d",&n,&m))
    {
        flag=1;
        //scanf("%d %d",&n,&m);
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        /*
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("%d \t",arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        */

        //if(rowflag==0)
        //{
        for(i=1; i<n; i++)
        {
            //columnflag=0;
            //count=0;
            for(j=0; j<m; j++)
            {
                /*
                if(count==0)
                {
                    value=arr[j][i];
                    //printf("Value : %d\n",value);
                    count++;
                    //continue;
                }
                else if(arr[j][i]==value)
                {
                    //columnflag=1;
                    flag=1;
                    break;
                }
                */
                if(arr[i][j]==arr[i-1][j])
                {
                    flag=0;
                }
            }
            /*
            if(columnflag==1)
            {
                break;
            }
            */
        }

        if(flag==1)
        {
            for(i=0; i<n; i++)
            {
                //rowflag=0;
                for(j=1; j<m; j++)
                {
                    if(arr[i][j]!=arr[i][j-1])
                    {
                        //rowflag=1;
                        flag=0;
                        break;
                    }
                }
                //printf("Row flag : %d\n",rowflag);
                /*
                if(rowflag==1)
                {
                    break;
                }
                */
            }
        }

        //}
        /*
        if(rowflag==1 || columnflag==1)
        {
            printf("NO\n");
        }
        */
        if(flag==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
