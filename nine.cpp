#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;

    int gcd_result = gcd(num1, num2);

    int lcm_result = (num1 * num2) / gcd_result;

    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd_result << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm_result << endl;

    return 0;
}
