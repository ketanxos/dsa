// Multiples of 3 or 5

#include <iostream>
using namespace std;

int main() {
    int limit, mul3, mul5, mul15, sum3, sum5, sum15, sum;
    limit = 1000,
    mul3 = (limit - 1) / 3,
    mul5 = (limit - 1) / 5,
    mul15 = (limit - 1) / 15,
    sum3 = 3 * mul3 * (mul3 + 1) / 2,
    sum5 = 5 * mul5 * (mul5 + 1) / 2,
    sum15 = 15 * mul15 * (mul15 + 1) / 2,
    sum = sum3 + sum5 - sum15;

    cout << sum << endl;

    return 0;
}