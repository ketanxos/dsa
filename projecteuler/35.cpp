// Circular Primes

#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int limit = 1000000;

    // Step 1: Sieve of Eratosthenes to find all prime numbers up to the limit
    vector<bool> sieve(limit + 1, true);
    sieve[0] = sieve[1] = false;  // 0 and 1 are not prime numbers
    for (int i = 2; i <= sqrt(limit); ++i) {
        if (sieve[i]) {
            for (int j = i * i; j <= limit; j += i) {
                sieve[j] = false;
            }
        }
    }

    // Step 2: Count circular primes
    int circular_prime_count = 0;

    // Iterate through all numbers from 2 to limit
    for (int number = 2; number < limit; ++number) {
        if (sieve[number]) {
            // Step 2.1: Generate all rotations of the number
            string num_str = to_string(number);
            int len = num_str.length();
            bool is_circular_prime = true;

            // Generate all rotations and check if they are prime
            for (int i = 0; i < len; ++i) {
                string rotated_str = num_str.substr(i) + num_str.substr(0, i);
                int rotated_number = stoi(rotated_str);

                // If any rotation is not prime, it's not a circular prime
                if (!sieve[rotated_number]) {
                    is_circular_prime = false;
                    break;
                }
            }

            // Step 2.2: If all rotations are prime, count the number as a circular prime
            if (is_circular_prime) {
                ++circular_prime_count;
            }
        }
    }

    // Step 3: Output the result
    cout << "Number of circular primes below " << limit << " is: " << circular_prime_count << endl;

    return 0;
}