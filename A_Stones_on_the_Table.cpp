#include<iostream>
using namespace std;
int main()
{
    string str;
    int n,count=0;
    cin>>n>>str;
    for (int i = 1; i < n; i++)
    {
        if(str[i] == str[i-1]) count++;
    }
    cout<<count<<endl;
    
    

    return 0;
}
//https://codeforces.com/problemset/problem/266/A