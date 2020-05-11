#include<stdio.h>
int main()
{
    int q,n,i,j,p,tp,avgp,avgt;
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&n);
        tp=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&p);
            tp=tp+p;
        }
        avgp=tp/n;
        avgt=avgp*n;
        if(avgt>=tp)
        {
            printf("%d\n",avgp);
        }
        else
        {
            printf("%d\n",avgp+1);
        }
    }
    return 0;
}
