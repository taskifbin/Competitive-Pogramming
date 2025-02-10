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
        set<ll> st;
        for(ll i=0;i<n;i++){
            ll temp;cin >> temp;
            st.insert(temp);
        }

        ll sum = 0;
        bool f = true;

        while(!st.empty()){
            ll temp = *(st.begin());

            while(sum >= temp && !st.empty()){
                temp = *(st.begin());
                st.erase(temp);
            }

            if(st.empty()){
                if(f)YES;
                else NO;
            }
            sum += temp;
            f = !f;
        }
    }


    return 0;
}