#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        if(x == y-1||x == y-2||x==y||x==y+1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    

    return 0;
}
//https://www.codechef.com/problems/PENALTYSHOOT