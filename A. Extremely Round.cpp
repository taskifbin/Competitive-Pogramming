#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,i=1;
        cin>>n;
        int count=0;

        while (i<=n)
        {
            if(i<10) {count++;i++;
}
            else if(i<100) { i +=10;count++;
}
            else if(i<1000) {i +=100;count++;
}
            else if(i<10000) {i +=1000;count++;
}
else if(i<100000) {i +=10000;count++;
}
else if(i<1000000) {i +=100000;count++; }
else if(i<10000000) {i +=100000;count++; }
else break;

        }
        
        
        
        cout<<count<<endl;
    }
    

    return 0;
}

//https://codeforces.com/problemset/problem/1766/A
