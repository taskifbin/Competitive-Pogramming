#include<iostream>
using namespace std;
int main()
{
    int a,b,f=-1;
    cin>>a>>b;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if(i%2 ==0) cout<<"#";
            else if(f==1){
                if(j != b-1) cout<<".";
                else cout<<"#";
            }
            else {
                if(j != 0) cout<<".";
                else cout<<"#";
            }
            
        }
        if(i%2 == 0)f *= -1;
        
        cout<<"\n";
    }
    

    return 0;
}