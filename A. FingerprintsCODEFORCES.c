#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,m,a[110],b[110],c[110];
    scanf("%d %d",&n,&m);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    for(i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(b[i]==c[j])
            {
                c[j]=-1;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(c[i]==-1)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n");
    return 0;
}
