#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,t,count=0,win= INT_MIN,man= INT_MIN;
    cin>>n>>t;
    int r[n],c[n];
    for (int i = 0; i < n; i++)
    {
        cin>>r[i];
        if(r[i] == t) count++;
    }
    for (int i = 0; i < n; i++)
    {
        cin>>c[i];
    
    }
    if(count) for (int i = 0; i < n; i++)
    {
        if(r[i] == t && c[i]>man) 
         {man=c[i];win=i;}

    }
    else {for (int i = 0; i < n; i++)
    {
    if(c[i]> man){man=c[i];win=i;}
    
    }
    }

    cout<<win+1<<"\n";
    

    return 0;
}