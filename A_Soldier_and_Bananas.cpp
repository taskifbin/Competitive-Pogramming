#include<iostream>
using namespace std;
int sump(int a,int b){
    int sum=0;
    for (int i = 1; i <= a; i++)
    {   
        sum += i*b;
        
    }
    
return sum;
}
int main()
{
    int k,n,w;

    cin>>k>>n>>w;
    int s=sump(w,k);
    if (s<=n) cout<<0<<"\n";
    else cout<<s-n<<"\n";
    return 0;
}