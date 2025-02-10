#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    long long ar[n];

    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    
    vector<pair<long long int,int>>v;

    for (int i = 0; i <  n; i++)
    {   
        pair<long long int,int> p;
        p.first=ar[i];
        p.second=i+1;
        v.push_back(p);
    }
    sort(v.begin(),v.end());

    int ans=0;
    vector<int>idx;
    for (int i = 0; i < n; i++)
    {
        if(v[i].first<=k){
            idx.push_back(v[i].second);
            ans++;
            k -=v[i].first;

        }
        else break;
    }
    cout<<ans<<"\n";
    if(ans == 0) ;
    else 
    for (int i = 0; i < idx.size(); i++)
    {
        cout<<idx[i]<<" ";
    }
    cout<<"\n";
    

    return 0;
}