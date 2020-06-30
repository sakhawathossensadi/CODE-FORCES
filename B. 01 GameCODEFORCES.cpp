#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t,i,len,s,p1,p2,z=3,flag=0,zero=0,one=0,foundflag=0,countt=0,k;
    vector<char> str1;
    scanf("%d",&t);
    getchar();
    for(k=0; k<t; k++)
    {
        str1.clear();
        flag=0;
        countt=0;
        zero=0;
        one=0;
        char str[200],ch;
        gets(str);
        len=strlen(str);
        for(i=0; i<len; i++)
        {
            str1.push_back(str[i]);
        }
        s=str1.size();
        for(i=0; i<s; i++)
        {
            if(str[i]=='0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        if(zero==0 || one==0)
        {
            flag=1;
        }
        while(s>0 && flag==0)
        {
            foundflag=0;
            zero=0;
            one=0;
            for(i=0; i<s; i++)
            {
                if((str[i]=='0' && str[i+1]=='1') || (str[i]=='1' && str[i+1]=='0'))
                {
                    p1=i;
                    p2=i+1;
                    foundflag=1;
                    countt++;
                    break;
                }
            }
            if(foundflag==1)
            {
                str1.clear();
                for(i=0; i<s; i++)
                {
                    if(i!=p1 && i!=p2)
                    {
                        str1.push_back(str1[i]);
                    }
                }
                s=str1.size();
                for(i=0; i<s; i++)
                {
                    str[i]=str1[i];
                }
                str[s]='\n';
            }
            else
            {
                break;
            }
        }
        if(countt%2==0)
        {
            printf("NET\n");
        }
        else
        {
            printf("DA\n");
        }
    }
    return 0;
}
