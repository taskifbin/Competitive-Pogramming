#include<iostream>
using namespace std;
int main()
{
    int n,mn,count=1,k;
    cin>>n;
    cin>>k;
    mn = k%10;
    for (int i = 0; i < n; i++)
    {
        int pl;
        cin>>pl;
        if(pl/10 == mn) count++;

        mn= pl%10;
    }
    cout<<count;

    return 0;
}