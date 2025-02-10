#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int count=2;
        while (count<=x)
        {  count *=2;
        }
        
        cout<<2*x-count<<"\n";
        

    }

    return 0;
}
//https://www.codechef.com/problems/CHEFIZZA