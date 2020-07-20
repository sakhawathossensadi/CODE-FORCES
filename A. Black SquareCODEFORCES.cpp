#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int i,len,total=0,a,b,c,d;
    char str[100000];
    cin>>a>>b>>c>>d;
    cin>>str;
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='1')
        {
            total=total+a;
        }
        else if(str[i]=='2')
        {
            total=total+b;
        }
        else if(str[i]=='3')
        {
            total=total+c;
        }
        else if(str[i]=='4')
        {
            total=total+d;
        }
    }
    cout<<total<<endl;
    return 0;
}
