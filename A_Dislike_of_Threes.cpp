#include<iostream>
using namespace std;
int main()
{
    int arr[1001];
    for (int i = 1,j=0;j<1000 ; i++)
    {
        if(i%3 != 0 && i%10 != 3) {arr[j]= i;j++;}
        else continue;
    }
    
    int t;
    cin>>t;
    
    

    while (t--)
    {
        int x;
        cin>>x;
        cout<<arr[x-1]<<endl;

    }
    

    return 0;
}