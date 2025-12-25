// Even Fibonacci Numbers

#include <iostream>
using namespace std;

int main() {
    int sum, a, b, next;
    sum = 0,
    a = 1,
    b = 2;

    while (b <= 4000000) {
        if (b % 2 == 0) {
            sum += b;
        }
        next = a + b;
        a = b;
        b = next;
    };

    cout << sum << endl;

    return 0;
}