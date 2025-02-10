#include<iostream>
#include<cmath>

using namespace std;
const long long int m = 10e9+7;


long long int func(long long int a){
    long long int at=0;
    for (long long int j = 1; j <a; j++)
        {
            at+= a%j;
        }
            at = at%m;
        return at;
}

int main()
{
    long long int l,r,s=0;
    cin>> l>>r;
    for (;  l<= r; l++)
    {
        if(func(l)==func(l-1))
        {
            s +=l;
        
        }
    }

   
    cout<<s  <<"\n";
    


    return 0;
}