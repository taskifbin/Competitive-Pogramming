#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int num,count=0;
        cin>>num;
        int a= num %10;
        while (num)
        {
            num /= 10;
            count++;
        }
        if(count==1) count=1;
        else if(count == 2) count = 3;
        else if(count == 3) count = 6;
        else if (count == 4) count=10;
        cout<<10 * (a-1)+count<<"\n";
        
    }
    

    return 0;
}