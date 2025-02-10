#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a=0,b=0;
        cin>>n;
        
        for (int i = 0; i < n; i++)
        {
            int we;
            cin>>we;
            
            if(we == 1) a++;
            else b++;
        }
        
        
        if(n%2!=0 ) cout<< "NO\n";
        else if(a % 2 == 0 || b % 2 ==0 || 2*a==b) cout<<"YES\n";
        else cout<<"NO\n";
    }
    

    return 0;
}