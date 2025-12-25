// Largest Prime Factor

#include <iostream>
using namespace std;

int main() {
    long long factor, number;
    factor = 2,
    number = 600851475143;

    while (factor * factor <= number) {
        if (number % factor == 0) {
            number /= factor;
        } else {
            factor++;
        }
    };

    cout << number << endl;

    return 0;
}