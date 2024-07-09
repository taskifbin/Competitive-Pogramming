#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int count=0;
    sort(str.begin(),str.end());
    for (int i = 1; i < str.size(); i++)
    {
        if(str[i] == str[i-1]) count++;
    }
    if((str.size()-count)%2==0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
    

    return 0;
}
//https://codeforces.com/problemset/problem/236/A