#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> round;
        vector<int> v= {10,100,1000,10000,100000};
       for(auto &it:v){
        if(n%it != 0){
            round.push_back(n%it);
            n -= (n%it);
        }
        }
        cout<<round.size()<<"\n";
        for ( auto &it: round)
        {
            cout<<it<<" ";
        }
        cout<<"\n";


    }
    

    return 0;
}