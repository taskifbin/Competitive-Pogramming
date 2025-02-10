#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int het=0,cube=0,L=1;

    while (true)
    {
        cube += .5*(L*(L+1));
        if(cube<=n){
        L++;
        het++;
        }
        else break;
    }

    cout<<het<<endl;
    return 0;
}