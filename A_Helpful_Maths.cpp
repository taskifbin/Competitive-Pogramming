#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    char ar[101];
    int on=0,tw=0,th=0;
    int l1,l2,l3;
    l1=l2=l3=0;
   for (int i = 0; i < str.size(); i++)
   {
        if(str[i]=='1') on++;
        else if (str[i] == '2') tw++;
        else if (str[i]== '3') th++;
    }
    if(th==0) l2=1;
    else l3=1;
    if(tw==0 && th==0) l1=1;
    
    
   for (int i = 0; i < on; i++)
   {
        cout<<"1";
        if((i == on-1) && (l1 ==1)) cout<<"";
        else cout<<"+";
   }
   for (int i = 0; i < tw; i++)
   {
        cout<<"2";
        if((i == tw-1)&& (l2==1)) cout<<"";
        else cout<<"+";
   }
   for (int i = 0; i < th; i++)
   {
        cout<<"3";
        if((i == th-1) && (l3==1)) cout<<"";
        else cout<<"+";
   }
   
   cout<<endl;
   
   

    return 0;
}
//https://codeforces.com/contest/339/problem/A