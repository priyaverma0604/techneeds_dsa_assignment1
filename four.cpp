#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int low, high;

    do {
        cout << "Enter lower limit (2 <= low < high < 10^6): ";
        cin >> low;
        cout << "Enter upper limit (2 <= low < high < 10^6): ";
        cin >> high;
    } while (low < 2 || low >= high || high >= 1000000);

    cout << "Prime numbers between " << low << " and " << high << " are:\n";

    for (int i = low; i <= high; i++) {
        if (isPrime(i))
            cout << i << " ";
    }

    cout << endl;

    return 0;
}
