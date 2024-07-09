#include<iostream>
using namespace std;
int main()
{
    long long int num,count=0;
    
    cin>>num;

   while (num)
   {
    if(num%10==4 || num%10==7) count++;
    num /=10;
   }
   
    if((count == 4||count==7)) cout<<"YES\n";
    else cout<<"NO\n";
    


    return 0;
}
//https://codeforces.com/contest/110/problem/A