#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    cout<<(n*n+1)/2<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i%2==0 && j%2==0) || (i%2==1 && j%2==1))
            {
                cout<<'C';
            }
            else
            {
                cout<<'.';
            }
        }
        cout<<endl;
    }
    return 0;
}
