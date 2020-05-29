#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,flag=1;

    char arr[104][104];
    while(cin>>n>>m)
    {
        flag=1;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>arr[i][j];
            }
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<m-1; j++)
            {
                if(arr[i][j]!=arr[i][j+1])
                {
                    flag=0;
                    break;
                }
            }
        }
        for(i=1; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(arr[i][j]==arr[i-1][j])
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

