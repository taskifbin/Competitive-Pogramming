#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    
    if(x%5==0) cout<<x/5;
    else cout<<x/5 +1;

    return 0;
}

//https://codeforces.com/problemset/problem/617/A