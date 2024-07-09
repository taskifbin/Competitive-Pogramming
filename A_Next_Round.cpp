#include<iostream>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a>>b;
    int n[a];
    for (int i = 0; i < a; i++)
    {
        cin>>n[i];
    }
    for (int i = 0; i < a; i++)
    {   if (n[i]>0)
        if(n[i]>=n[b-1]) count++;
    }
    cout<<count<<"\n";
    

    return 0;
}
//https://codeforces.com/problemset/problem/158/A