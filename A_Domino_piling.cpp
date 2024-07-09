#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b;
    for (int i = 0; i < (a*b)/2; i++)
    {   n=i+1;
        if(a*b<=n*2) break;
    }
    cout<<n<<"\n";
    

    return 0;
}