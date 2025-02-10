#include<iostream>
using namespace std;
int main()
{
    int ca,cd,num;
    ca=cd=0;
    string str;
    cin>>num>>str;
    for (int i = 0; i <num ; i++)
    {
        if(str[i]=='A') ca++;
        else cd++;
    }
    if(ca>cd) cout<<"Anton"<<"\n";
    else if( ca==cd) cout<<"Friendship\n";
    else cout<<"Danik\n";

    

    return 0;
}