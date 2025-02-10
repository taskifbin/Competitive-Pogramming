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
        int arr[n];
        int idx=1;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];

        }
        if(arr[0] != arr[1] && arr[0] != arr[2] ){
                idx = 1;
            }
        else for (int i = 1; i < n; i++)
        {
            if(arr[i] != arr[0]){
                idx = i+1;
                break;
            }
            
        }
        cout<<idx<<"\n";
        
        
    }
    

    return 0;
}