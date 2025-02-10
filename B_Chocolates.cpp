#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i=0; i<n;i++)
    {
        cin>>v[i];
    }
    
    reverse(v.begin(),v.end());
    int ans=0;

    ans += v[0];
    int mx = v[0]-1;

    for (int i=1; i<n; i++)
    {
        ans += min(mx,v[i]);
        mx = min(mx,v[i]) -1;
        if(mx <=0) break;
        
    }
    cout<<ans<<"\n";
    

    return 0;
}