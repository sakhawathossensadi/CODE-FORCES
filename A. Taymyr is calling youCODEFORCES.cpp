#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<int> llia;
    vector<int> artist;
    int i,j,n,m,z,in=1,r,s1,s2,mini,maxi,countt=0;
    scanf("%d %d %d",&n,&m,&z);
    while(1)
    {
        r=in*n;
        if(r<=z)
        {
            llia.push_back(r);
        }
        else
        {
            break;
        }
        in++;
    }
    in=1;
    while(1)
    {
        r=in*m;
        if(r<=z)
        {
            artist.push_back(r);
        }
        else
        {
            break;
        }
        in++;
    }
    s1=llia.size();
    s2=artist.size();
    for(i=0; i<s1; i++)
    {
        for(j=0; j<s2; j++)
        {
            if(llia[i]==artist[j])
            {
                countt++;
            }
        }
    }
    printf("%d\n",countt);
    return 0;
}
