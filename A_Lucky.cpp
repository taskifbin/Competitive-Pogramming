#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int fir=0,sec=0;
        int num;
        cin>>num;
        for (int i = 0; i < 3; i++)
        {

            sec += (num%10);
            num /= 10;
            
        }
        for (int i = 0; i < 3; i++)
        {

            fir += (num%10);
            num /= 10;
            
        }
        if(fir == sec) cout<<"YES\n";
        else cout<<"NO\n";
        
    }
    

    return 0;
}