#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int num[t],sum=0,count=0;
    for (int i = 0; i < t; i++)
    {
        cin>>num[i];
        sum +=num[i];
    }
    int n = sizeof(num) / sizeof(num[0]);
    sort(num, num + n);
    
    if(t>2)
    for (int i = t-1; i >= 0; i -=2)
    {
        
        if(num[i]+num[i+1] < sum) count++;
        else break;

    }
    else count=t;
    cout<<count;
    

    return 0;
}