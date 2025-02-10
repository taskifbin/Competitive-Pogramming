#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;

        cin>>n;

        int a,b;

       if(n%3 == 0) { a = n/3;b=  (n/3);}
       else if (n % 3 == 1) {a= n/3 +1; b=  (n/3);}
       else {a= n/3; b = (n/3)+1;}

       cout<<a<<" "<<b<<"\n";
    }
    

    return 0;
}