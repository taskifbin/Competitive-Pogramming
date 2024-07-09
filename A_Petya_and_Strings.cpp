#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,st;
    int a;
    cin>>str>>st;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    transform(st.begin(), st.end(), st.begin(), ::tolower);
    
    if(str == st) a=0;
    else if( str < st) a=-1;
    else a=1;

    cout<<a<<endl;

    return 0;
}
//https://codeforces.com/contest/112/problem/A