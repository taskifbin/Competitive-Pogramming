#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[26]={0};
    int cnt=0;
    char str;
    for (int i = 0; i < n; i++)
    {
        cin>>str;
        arr[str - 65] += 1;
        
        if(arr[str - 65] == 1)  cnt +=2;
        else cnt++;
    }
    cout<<cnt<<"\n";
    

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