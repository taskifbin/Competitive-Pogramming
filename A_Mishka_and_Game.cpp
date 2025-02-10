#include<iostream>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b) count++;
        else if(b>a) count--;
    }
    if(count<0) cout<<"Chris\n";
    else if( count>0) cout<<"Mishka\n";
    else cout<<"Friendship is magic!^^\n";
    

    return 0;
}