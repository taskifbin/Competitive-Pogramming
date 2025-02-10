#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;

        if(b>a && (b-a)%2 != 0) cout<<1<<"\n";
        else if(b>a && (b-a)%2 == 0) cout<<2<<"\n";
        else if(a>b && (a-b)%2 != 0) cout<<2<<"\n";
        else if(a>b && (a-b)%2 == 0) cout<<1<<"\n";
        else cout<<0<<"\n";

    }
    

    return 0;
}