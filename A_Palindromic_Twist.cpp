#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag;

        for (int i = 0; i < n/2; i++)
        {
            if(abs(s[i] - s[n-i-1]) == 2 || s[i]==s[n-1-i])
            flag= true;
            else {flag= false;break;}

            
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
        
    }
    

    return 0;
}