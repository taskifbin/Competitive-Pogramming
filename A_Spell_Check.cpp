#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,tc,ic,mc,uc,rc,cc;
        tc=ic=mc=uc=rc=cc=0;
        cin>>n;
        string arr;
        cin>>arr;
        for (int i = 0; i < n; i++)
        {   
            if(arr[i] == 'T') tc++;
            else if (arr[i] == 'i') ic++;
            else if (arr[i] == 'm') mc++;
            else if (arr[i] == 'r') rc++;
            else if (arr[i] == 'u') uc++;
            else cc++;

        }

        if ((tc==1) && (ic == 1) && (mc == 1) && (uc == 1) && (rc == 1) && (cc ==0)) cout<<"YES\n";
        else cout<<"NO\n";
        
    }

    return 0;
}