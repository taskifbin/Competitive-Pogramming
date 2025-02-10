#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int x,y,k,count=0;
        cin>>x>>y>>k;
        while(x != 0)
        {
            x -= k;
            count++;
            
        }
        while(y != 0)
        {
             y -= k;
             count++;
            
        }
        cout<<count<<"\n";
        
    }
    

    return 0;
}