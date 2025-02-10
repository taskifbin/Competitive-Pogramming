#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    set <int> levels;
    int p;
    cin>>p;
    for (int i = 0; i < p; i++)
    {   int a;
        cin>>a;
        levels.insert(a);
    }
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {   int a;
        cin>>a;
        levels.insert(a);
    }
    if(levels.size() == n) cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!\n";
    
    

    return 0;
}