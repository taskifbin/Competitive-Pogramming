#include <iostream>
#include <vector>
using namespace std;

void sieve(int n) {
    vector<bool> isPrime(n + 1, true); // Create a boolean array, initialized to true
    isPrime[0] = isPrime[1] = false;   // 0 and 1 are not prime

    for (int i = 2; i * i <= n; i++) { // Loop from 2 to sqrt(n)
        if (isPrime[i]) {              // If i is prime
            for (int j = i * i; j <= n; j += i) { // Mark multiples of i
                isPrime[j] = false;
            }
        }
    }

    // Printing all prime numbers
    cout << "Prime numbers up to " << n << ":\n";
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    sieve(n);
    return 0;
}
