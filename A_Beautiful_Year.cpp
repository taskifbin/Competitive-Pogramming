#include<iostream>
using namespace std;
int main()
{
    
    string st;
    int f=1,y;
    cin>>y;
    
    st= to_string(y);
    while (f)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 1; j< 4; j++)
            {
                if(st[i] == st[j]) ;
                else f=0;
            }
            
        }
        int n;
        n= stoi(st);

        n++;
        st= to_string(n);
        
    }
    cout<<st<<"\n";
    
    


    return 0;
}