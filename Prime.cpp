#include <iostream>
#include <cmath>  // For sqrt function
using namespace std;

bool checkPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i <= sqrt(n); i++) {  // Loop from 2 to sqrt(n)
        if (n % i == 0) 
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    if (checkPrime(n)) 
        cout << "Prime number\n";
    else 
        cout << "Not a Prime number\n";

    return 0;
}
