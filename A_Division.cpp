#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int rat;
        cin>>rat;

        if(rat>=1900) cout<<"Division 1\n";
        else if(rat>= 1600 && rat <=1899) cout<<"Division 2\n";
        else if(rat>= 1400 && rat <=1599) cout<<"Division 3\n";
        else if(rat <=1399) cout<<"Division 4\n";

    }
    

    return 0;
}