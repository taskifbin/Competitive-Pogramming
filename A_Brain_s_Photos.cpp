#include<iostream>
using namespace std;
int main()
{
    int m,n;
    int f=0;
    cin>>m>>n;
    char arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
             if(arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y') f=1;
        }
        
    }

   
    if(f ) cout<<"#Color\n";
    else cout<<"#Black&White\n";
    
    

    return 0;
}