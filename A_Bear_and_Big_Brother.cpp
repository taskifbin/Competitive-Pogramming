#include<iostream>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a>>b;
    
    while (1)
    {   
        if(a<=b) count++;
        else break;
        a *=3;
        b *=2;
    }
    cout<<count<<endl;

    return 0;
}




//https://codeforces.com/problemset/problem/791/A