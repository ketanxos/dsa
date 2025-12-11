```cpp
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double N;

    cin >> N;

    double lambda = 0.01;

    double probability = exp(-lambda * N);

    cout << fixed << setprecision(6) << probability << endl;

    return 0;
}
```