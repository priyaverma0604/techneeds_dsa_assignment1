#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number (1 <= n < 10^9): ";
    cin >> n;

    if(n < 1 || n >= 1000000000) {
        cout << "Invalid input. Please enter a number between 1 and 999999999." << endl;
        return 0;
    }

    while(n > 0) {
        cout << n % 10 << endl;
        n /= 10;
    }

    return 0;
}
