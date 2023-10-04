#include <iostream>
#include <cmath>
using namespace std;

int main() {
     int n, k;
     cout << "Enter the number (n): ";
    cin >> n;

    cout << "Enter the number of rotations (k): ";
    cin >> k;

    int numDigits = log10(n) + 1;
    k %= numDigits;

    if (k < 0) {
        k = numDigits + k;
    }

    int divisor = pow(10, k);
    int rotatedNumber = (n % divisor) * pow(10, numDigits - k) + (n / divisor);

    cout << "Rotated number: " << rotatedNumber << endl;

    return 0;
}
