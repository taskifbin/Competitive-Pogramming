#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
    

        // if(a==0 || b==0 && (a%2 !=0 && b%2 !=0)) cout<<"NO\n";
        // else if(a%2==0 && b%2==0) cout<<"YES\n";
        // else if((a*b)%2 ==0) cout<<"YES\n";
        // else cout<<"NO\n";
        if(a==0 || b==0 && (a%2 !=0 || b%2 !=0)) cout<<"NO\n";
        else if(a%2 -b ==0) cout<<"NO\n";
        else cout<<"Yes\n"; 
    }

    return 0;
}