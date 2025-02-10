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
        if(n&1){
            ll a = n,b=1;
            for(ll i=1;i<=n;i++){
                if(i&1){
                    cout << a << " ";
                    a--;
                }
                else{
                    cout << b << " ";
                    b++;
                }
            }cout << endl;
        }
        else cout << -1 << endl;
        
    }


    return 0;
}