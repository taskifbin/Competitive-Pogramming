#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a;
        string str;
        cin>>a>>str;

        if(str[0] == str[str.size()-1]) cout<<"NO\n";
        else 
        cout<<"YES\n";
        

    }
    
    

    return 0;
}