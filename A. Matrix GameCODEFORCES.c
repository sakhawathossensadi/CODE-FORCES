#include<stdio.h>
int main()
{
    int t,n,m,i,j,k,l,o,p,rowflag,colflag,count,ele,x,y;
    scanf("%d",&t);
    for(l=0; l<t; l++)
    {
        int arr[100][100];
        rowflag=0;
        colflag=0;
        count=0;
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                arr[i][j]=0;
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                scanf("%d",&ele);
                if(ele==1)
                {
                    for(x=0; x<m; x++)
                    {
                        arr[i][x]=1;
                    }
                    for(x=0; x<n; x++)
                    {
                        arr[x][j]=1;
                    }
                }
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(arr[i][j]==0)
                {
                    count++;
                    for(x=0; x<m; x++)
                    {
                        arr[i][x]=1;
                    }
                    for(y=0; y<n; y++)
                    {
                        arr[y][j]=1;
                    }
                }
            }
        }
        if(count%2==0)
        {
            printf("Vivek\n");
        }
        else
        {
            printf("Ashish\n");
        }
    }
    return 0;
}
