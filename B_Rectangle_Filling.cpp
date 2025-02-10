#include"bits/stdc++.h"
using namespace std;

#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

typedef long long ll;
const int MOD = 1000000007;


 
int main(){

    fast_io;
 
    ll tc;cin >> tc;


    while(tc--){
        
        ll n,m;cin >> n >> m;
        vector<string> arr(n);
        for(ll i=0;i<n;i++){
            cin >> arr[i];
        }
        bool f1 = false;
        bool f2 = false;
        for(ll i=0;i<m;i++){
            if(arr[0][i] == 'W'){
                f1 = true;
            }
            if(arr[n-1][i] == 'W') f2 = true;
        }
        bool f3 = false;
        bool f4 = false;
        for(ll i=0;i<n;i++){
            if(arr[i][0] == 'W') f3 = true;
            if(arr[i][m-1] == 'W') f4 = true;
        }


        if(f1 && f2 && f3 && f4){
            YES;
            continue;
        }
        else{
            f1 = false;
            f2 = false;
            f3 = false;
            f4 = false;
        }

        for(ll i=0;i<m;i++){
            if(arr[0][i] == 'B'){
                f1 = true;
            }
            if(arr[n-1][i] == 'B') f2 = true;
        }
    
        for(ll i=0;i<n;i++){
            if(arr[i][0] == 'B') f3 = true;
            if(arr[i][m-1] == 'B') f4 = true;
        }

        if(f1 && f2 && f3 && f4)YES;
        else NO;
    }


    return 0;
}