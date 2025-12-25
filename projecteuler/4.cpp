// Largest Palindrome Product

#include <iostream>
using namespace std;

int main() {
    int maxPal, prod, rvrs, tmp, i, j;
    maxPal = 0;
    
    for (i = 999; i >= 100; i--) {
        for (j = i; j >= 100; j--) {
            prod = i * j;
            rvrs = 0;
            tmp = prod;
            while (tmp > 0) {
                rvrs = rvrs * 10 + tmp % 10;
                tmp /= 10;
            };
            if (prod == rvrs && prod > maxPal) {
                maxPal = prod;
            };
        };
    };

    cout << maxPal << endl;

    return 0;
}