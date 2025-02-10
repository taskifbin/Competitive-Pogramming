#include<iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0) flag=1;
        else {flag=0;break;}
    }
    
    if(flag) cout<<"EASY\n";
    else cout<<"HARD\n";
    

    return 0;
}