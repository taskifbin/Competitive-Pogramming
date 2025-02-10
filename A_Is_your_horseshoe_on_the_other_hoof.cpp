#include<iostream>
#include <set>
using namespace std;
int main()
{
    
   int a,b,c,d;
   cin>>a>>b>>c>>d;

   set<int> color;
   color.insert(a);
   color.insert(b);
   color.insert(c);
   color.insert(d);

   cout<<4 - color.size()<<"\n";    
    

    return 0;
}