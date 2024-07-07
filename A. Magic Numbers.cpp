#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num;
    int flag=0;

    cin>>num;
    
    while(num){
    if(num % 10 == 4){
        if((num % 100== 14)||(num%1000==144)){
        flag=1;
        
        }
        else {flag=0;break;}

    }
    else if(num%10==1) flag=1;
    else  {flag=0; break;}
    num /=10;
    
    }


    if(flag) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}

//https://codeforces.com/problemset/problem/320/A
