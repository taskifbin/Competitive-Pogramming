#include<iostream>
using namespace std;

bool checkstmnt(string stmnt){
    if(stmnt == "X++" || stmnt == "++X")
    return true;
    else return false;
}

int main()
{
    int n;
    cin>>n;
    int x=0;
    for (int i = 0; i < n; i++)
    {
        string ste;
        cin>>ste;
        if(checkstmnt(ste)) x++;
        else x--;
    }
    cout<<x<<endl;
    

    return 0;
}