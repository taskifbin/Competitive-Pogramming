#include <iostream>
#include <bits/stdc++.h>
bool checkPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i <= sqrt(n); i++) {  // Loop from 2 to sqrt(n)
        if (n % i == 0) 
            return false;
    }
    return true;
}
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(checkPrime(n-2)) cout<<"2 "<<n-2<<"\n";
    else cout<<-1<<"\n";


    return 0;
}