#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,n,k=0,j,z,m,e,f,g;
    scanf("%d",&n);
    char color[7]= {'R','O','Y','G','B','I','V'};
    char str[110];
    for(i=0; i<n; i++)
    {
        if(k>6)
        {
            m=i;
            e=m-1;
            f=m-2;
            g=m-3;
            for(j=0; j<7; j++)
            {
                if(str[e]!=color[j] && str[f]!=color[j] && str[g]!=color[j]&& str[0]!=color[j] && str[1]!=color[j] && str[2]!=color[j])
                {
                    str[i]=color[j];
                    break;
                }
            }
        }
        else
        {
            str[i]=color[k];
            k++;
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}
