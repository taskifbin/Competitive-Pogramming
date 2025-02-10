#include"bits/stdc++.h"
using namespace std;

#define YES cout<<"Alice\n"
#define NO cout<<"Bob\n"
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

typedef long long ll;
const int MOD = 1000000007;

vector<ll> b[3e5+5];
vector<ll> c[3e5+5];
vector<ll> d[3E5+5];


 
int main(){

    fast_io;
 
    ll tc;cin >> tc;


    while(tc--){
        // ll n;cin >> n;
        // vector<ll> a(n);
        // vector<bool> vis(n+1,false);
        // vector<ll> cnt(n+1,0);
        // ll m = 0;
        // for(ll i=0;i<n;i++){
        //     cin >> a[i];
        //     if(vis[a[i]] == false){
        //         m++;
        //         vis[a[i]] = true;
        //     }
        //     cnt[a[i]]++;
        // }
        // vector<ll> ans(m+1);
        // ll sum = 0;
        // ll mini = 1e9;
        // vis = vector<bool> (n+1,false);
        // for(ll t = 0 ; t<(n-m) ; t++){
        //     vector<ll> curr (m+1);
        //     ll j = 1;
        //     for(ll i=t;i<n;i++){
        //         if(!vis[a[i]]){
        //             vis[a[i]] = true;
        //             if(j&1){
        //                 sum += (-1*a[i]);
        //             }
        //             else sum+= a[i];
        //             curr[j++] = a[i];
        //         }
        //     }
        //     if(mini > sum){
        //         mini = sum;
        //         ans = curr;
        //     }

        // }
        // cout << m << endl;
        // for(ll i=1;i<=m;i++){
        //     cout << ans[i] << " ";
        // }cout << endl;

        // b = c c = p d = t

        ll n;cin >> n;
        vector<ll> a(n+1);
        vector<bool> vis(n+1,false);
        vector<ll> ans;
        ll mini = 3e5+1;
        for(ll i=1;i<=n;i++){
            cin >> a[i];
            b[i] = 0;
            
            c[i] = -1;
            d[i].clear();

        }
        for(ll i=1;i<=n;i++){
            c[a[i]] = i;
            d[a[i]].push_back(i);
        }
        for(ll i=1;i<=n;i++){
            if(c[i] != -1){
                b[c[i]]++;
                mini = min(mini,c[i]);
            }
        }
        for(ll i=1;i<=n;){
            if(i == mini){
                ans.push_back(a[i]);
                b[c[a[i]]]--;
                while(b[mini] == 0 && mini <= n){

                    mini++;
                    i++;
                }
            }
            else{
                ll x = ans.size();
                if(x%2 == 0){
                    ll m = 0;
                    for(ll j=i;j<=min(mini,n);j++){
                        if(!vis[j]) m = max(m,a[j]);
                    }
                    for(ll j=i;j<=min(mini,n);j++){
                        if(a[j] == m){
                            i = j+1;
                            break;
                        }
                    }
                    if(m == 0) break;
                    ans.push_back(m);
                    b[c[m]]--;
                    while( mini <= n && b[mini] = 0)mini++;
                }
                else{
                    ll m = 1e9;
                    for(ll j=i;i<=min(mini,n);j++){
                        if(vis[j] == false){
                            m = min(m,a[j]);
                        }
                    }
                    for(ll j = i; j<=min(mini,n);j++){
                        if(a[j] == m){
                            i = j+1;
                            break;
                        }
                    }
                    if(m == 1e9) break;
                    ans.push_back(m);
                    b[c[m]]--;
                    while( mini <= n && b[mini] == 0)mini++;
                }
            }
            for(ll z : d[ans.back()]) {
                vis[z] = true;
            }
        }
        cout << ans.size() << endl;
        for(auto i:ans)cout << i <<" ";
        cout << endl;

        

        
        
    }


    return 0;
}