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
        int arr[500];
        for (int i = 0; i < n; i++)
        {   
            string str;
            for (int j = 0; j < 4; j++)
            {
                
                cin>>str[j];

            }
            for (int k = 0; k < 4; k++)
            {
                if(str[k] == '#') {arr[i]=k+1;break;}
            }
            
        }
        for (int z = n-1; z >=0; z--)
        {
            cout<<arr[z]<<" ";
        }
        cout<<"\n";
        
        
    }
    

    return 0;
}