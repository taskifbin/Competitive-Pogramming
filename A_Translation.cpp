#include<iostream>
using namespace std;
int main()
{
    string str1,str2;
    int f=1;
    cin>>str1>>str2;
    int si=str1.length();
    int s=str2.length();
    for (int i = 0; i < si; i++)
    {
        if(str1[i] != str2[si-1-i]) {f=0;break;}
    }
    if(f && s == si) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}