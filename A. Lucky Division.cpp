#include<iostream>
using namespace std;
int main()
{
  int flag=0;
  string str;
  cin>>str;
  long long int r=stoi(str);
  
  if((r % 4 == 0)||(r % 7 == 0) ||(r % 47 == 0) || (r % 74 == 0) || (r % 444 == 0)||(r % 447 == 0)||(r % 474 == 0)||(r % 477 == 0)||(r % 744 == 0)||(r % 747 == 0)||(r % 774 == 0)||(r % 777 == 0)){
    flag=1;
  }
  else
  for (int i = 0; i < str.length(); i++)
  {
    if((str[i] == '4')||(str[i] == '7'))
    {
        flag=1;
    }
    else { flag=0; break;}
  }
  
    if(flag == 1)
    cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
// https://codeforces.com/problemset/problem/122/A
