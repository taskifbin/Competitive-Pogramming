#include<iostream>
using namespace std;
int main()
{
    string x;
    cin>>x;
    string ans;
    for (int i = 0; i < x.size(); i++)
    {
        int n = x[i] - '0';
        int invrt = 9- n;
        ans += (min(n,invrt)+ '0');

    }
    
        if(ans[0] == '0') ans[0] = '9' ;
    
    
    cout<<ans<<endl;

    return 0;
}