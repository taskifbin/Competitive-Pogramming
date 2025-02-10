#include<bits/stdc++.h>
using namespace std;
bool prime(int a){
    if(a==1)return false;
    if(a==2||a==3) return true;
    for (int i = 2; i*i <= a; i++)
    {
        if(a % i == 0) return false;
    }
    return true;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    { long long int x,count=2,a=1,p;
	    cin>>x;
	    while (count)
        {
            p=prime(x);
            if(p) {a *=x; count--;}

            x++;
        }
        cout<<a<<"\n";
        
        

    }

    return 0;
}

//https://www.codechef.com/problems/NUMHUNT