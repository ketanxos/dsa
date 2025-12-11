```cpp
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double p_ab, p_mb, p_1;

    cin >> p_ab;
    cin >> p_mb;
    cin >> p_1;

    double p_different_transport = p_mb * (1 - p_ab) + (1 - p_mb) * p_ab;
    double p_rs = p_1 * p_different_transport;

    cout << fixed << setprecision(6) << p_rs << endl;
    
    return 0;
}
```
