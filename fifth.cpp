#include <iostream>
using namespace std;

int main() {
    int n;
do {
    cout << "Enter a number(1 <= n <10^9): ";
    cin >> n;
} while (n < 1 || n>= 1000000000);
    cout << "Digits in "<< n <<" are: ";
    int count = 0;
    for (; n !=0; n /= 10, count++) cout<< n % 10 << " ";

    cout << "\nTotal number if digits: " << count <<endl;

    return 0;
}