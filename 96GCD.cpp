#include<iostream>
using namespace std;

int gcd(int a, int b) {
    // Handle the case when one of the numbers is 0
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }

    // Perform the Euclidean algorithm iteratively
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a;
    int b;
    cout << "Enter a and b: " << endl;
    cin >> a >> b;

    int ans = gcd(a, b);

    cout << "The GCD of " << a << " and " << b << " is " << ans << endl;

    return 0;
}
