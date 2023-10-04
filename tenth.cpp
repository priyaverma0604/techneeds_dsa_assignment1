#include <iostream>
using namespace std;

void primefactorization(int n) {
    while (n % 2 == 0) {
        cout << 2 << " ";
        n = n / 2;
    }

    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
    }

    if (n > 2)
        cout << n << " ";
}

int main() {
    int n;
    cout << "Enter a number (2 <= n < 10^9): ";
    cin >> n;

    if (n < 2 || n >= 1000000000) {
        cout << "Invalid input. Please enter a number within the specified range." << endl;
        return 0;
    }

    cout << "Prime factorization of " << n << " is: ";
    primefactorization(n);

    return 0;
}
