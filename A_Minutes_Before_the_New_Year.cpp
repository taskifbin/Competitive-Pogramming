#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int h,m,hour,min,ti;
        cin>>h>>m;
        hour=23-h;
        min=60-m;
        ti=(hour*60)+min;
        cout<<ti<<"\n";

    }
    

    return 0;
}