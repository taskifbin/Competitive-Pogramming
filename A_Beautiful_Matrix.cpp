#include<iostream>
using namespace std;
int main()
{
    int ar[5][5],ro,co,count=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>ar[i][j];
            if(ar[i][j] != 0 ){ ro=i;co=j;}
        }
        
    }
    if(ro != 2)
    while (ro != 2)
    {
        if(ro>2) {ro--;count++;}
        else {ro++;count++;}
    }

    if(co != 2)
    while (co != 2)
    {
        if(co>2) {co--;count++;}
        else {co++;count++;}
    }
    
    cout<<count<<"\n";
    
    

    return 0;
}