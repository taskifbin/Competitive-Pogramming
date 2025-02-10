#include<iostream>
using namespace std;
int main()
{
    int t,x=1;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < m; i++)
        {
            char s;
            int d,y,temp;

            cin>>s;

            if(s == 'P') cin>>d>>y;
            else if(s == 'R') ;
            else cin>>d;


            if(s=='S') for (int j = 0; j< n; j++)
            {
                arr[j] += d;
            }

            else if(s == 'M') for (int j = 0; j < n; j++)
            {
                arr[j] *= d;
            }
            else if(s== 'D') for (int j = 0; j< n; j++)
            {
                arr[j] /= d;
            }
            else if( s== 'P') 
            {
                temp= arr[d];
                arr[d] = arr[y];
                arr[y] = temp;
            }
            else {for (int j = 0; j < n/2; j++)
            {
                temp= arr[j];
                arr[j]= arr[n-1-j];
                arr[n-1-j] = temp;
            }}
            
            
        }

        cout<<"Case "<<x<<":\n";
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        x++;
        
        
    }
    

    return 0;
}