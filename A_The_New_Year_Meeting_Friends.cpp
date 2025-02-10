#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int res,gre,lo;

    if(a>b && a>c) gre= a;
    else if(b>a && b>c) gre =b;
    else gre = c;

    if(a <b && a <c) lo=a;
    else if(b < a && b <c) lo=b;
    else lo=c;

    res = gre - lo;

    
    
    cout<<res<<"\n";
    
    

    return 0;
}