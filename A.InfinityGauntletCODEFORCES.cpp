#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t,i,counter=0,finalresult;
    char str[10];
    char stone[6][10]={"Power","Time","Space","Soul","Reality","Mind"};
    char color[6][10]={"purple","green","blue","orange","red","yellow"};
    int trace[6]={0};
    /*
    for(i=0;i<6;i++)
    {
        cout<<stone[i]<<endl;
    }
    cout<<endl;
    for(i=0;i<6;i++)
    {
        cout<<color[i]<<endl;
    }
    cout<<endl;
    for(i=0;i<6;i++)
    {
        cout<<trace[i]<<endl;
    }
    cout<<endl;
    */
    scanf("%d",&t);
    getchar();
    //cout<<t<<endl;
    for(i=0;i<t;i++)
    {
        gets(str);
        if(str[0]==color[0][0])
        {
            trace[0]=1;
            counter++;
        }
        else if(str[0]==color[1][0])
        {
            trace[1]=1;
            counter++;
        }
        else if(str[0]==color[2][0])
        {
            trace[2]=1;
            counter++;
        }
        else if(str[0]==color[3][0])
        {
            trace[3]=1;
            counter++;
        }
        else if(str[0]==color[4][0])
        {
            trace[4]=1;
            counter++;
        }
        else if(str[0]==color[5][0])
        {
            trace[5]=1;
            counter++;
        }
    }
    /*
    for(i=0;i<6;i++)
    {
        cout<<trace[i]<<endl;
    }
    cout<<endl;
    */
    //cout<<"Counter value : "<<counter<<endl;
    finalresult=6-counter;
    cout<<finalresult<<endl;
    for(i=0;i<6;i++)
    {
        if(trace[i]==0)
        {
            cout<<stone[i]<<endl;
        }
    }
    return 0;
}
