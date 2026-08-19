#include <iostream>
#include "MathUtils.h"

using namespace std;

int main() {
    int num = 21;

    cout << "Checking number: " << num << endl;
    cout << "Is prime? " << (MathUtils::isPrime(num) ? "Yes" : "No") << endl;
    cout << "Factorial: " << MathUtils::factorial(num) << endl;

    return 0;
}
