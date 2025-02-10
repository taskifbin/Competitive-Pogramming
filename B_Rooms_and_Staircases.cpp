#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int cnt=0;
    int n;
    string s;
    cin>>n>>s;
    int ans=n;
    for (int i = 0; i < n; i++)
    {
        cnt++;
        if(s[i]=='1'){
        ans = max(ans,(i+1)*2);
        cnt++;
    }
}
ans = max(ans,cnt);

reverse(s.begin(),s.end());
cnt=0;
for (int i = 0; i < n; i++)
    {
        cnt++;
        if(s[i]=='1'){
        ans = max(ans,(i+1)*2);
        cnt++;
    }
}

ans = max(ans,cnt);
cout<<ans<<"\n";
    
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}