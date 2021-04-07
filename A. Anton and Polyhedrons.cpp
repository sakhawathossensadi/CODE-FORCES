#include<bits/stdc++.h>
#include<string.h>
#include<vector>
using namespace std;

int main()
{
    string s;
    vector<vector<string>> str;
    vector<string> ss;
    int n,i,totalFaces=0;
    cin>>n;
    getchar();
    for(i=0;i<n;i++)
    {
        getline(cin,s);
        ss.push_back(s);
        str.push_back(ss);
        ss.clear();
    }
    for(i=0;i<n;i++)
    {
        s=str[i].back();
        if(s[0]=='T')
        {
            totalFaces=totalFaces+4;
        }
        else if(s[0]=='C')
        {
            totalFaces=totalFaces+6;
        }
        else if(s[0]=='O')
        {
            totalFaces=totalFaces+8;
        }
        else if(s[0]=='D')
        {
            totalFaces=totalFaces+12;
        }
        else
        {
            totalFaces=totalFaces+20;
        }
    }
    cout<<totalFaces<<endl;
    return 0;
}

