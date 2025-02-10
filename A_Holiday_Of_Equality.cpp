#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,max=INT_MIN;
    long int sum=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum +=arr[i];
        if(max<arr[i]) max = arr[i];
    }
    cout<<(max*n) - sum<<"\n";
    

    return 0;
}