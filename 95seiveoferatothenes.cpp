#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> segmented_sieve(int n) {
    const int segment_size = sqrt(n) + 1;  // Determine segment size (square root of n)

    vector<int> primes;  // Vector to store prime numbers
    vector<bool> is_prime(n + 1, true);  // Initialize a sieve for the current segment

    for (int p = 2; p * p <= n; ++p) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;  // Mark multiples of prime as composite (not prime)
            }
        }
    }

    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);  // Add unmarked numbers to the list of primes
        }
    }

    return primes;
}

int main() {
    int n;
    cout << "Enter the upper limit: ";
    cin >> n;

    vector<int> primes = segmented_sieve(n);

    cout << "Prime numbers up to " << n << " are: ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}