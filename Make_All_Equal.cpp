#include"bits/stdc++.h"
using namespace std;

#define YES cout<<"Alice\n"
#define NO cout<<"Bob\n"
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

typedef long long ll;
const int MOD = 1000000007;


 
int main(){

    fast_io;
 
    ll tc;cin >> tc;


    while(tc--){
        ll n;cin >> n;
        vector<ll> a(n+1);
        ll maxi = 0;
        vector<ll> cnt(n+5,0);
        for(ll i=1;i<=n;i++){
            cin >> a[i];
            cnt[a[i]]++;
            maxi = max(maxi,cnt[a[i]]);
        }
        if(n== maxi) cout<< 0 << endl;
        else{
        cout << n - maxi << endl;
        }
        
    }


    return 0;
}