#include<bits/stdc++.h>
#include<vector>
#include<string.h>
using namespace std;
vector<string> team;
int main()
{
    int t,i,j,count1=1,count2=0;
    string s,t1,t2;
    char str[15];
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        gets(str);
        team.push_back(str);
    }
    t1=team[0];
    for(i=0;i<t;i++)
    {
        s=team[i];
        int res = t1.compare(s);
        if(res==0)
        {
            count1++;
        }
        else
        {
            t2=team[i];
            count2++;
        }
    }
    if(count1>count2)
    {
        cout<<t1<<endl;
    }
    else
    {
        cout<<t2<<endl;
    }
    return 0;
}
