```cpp
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    double p;

    cin >> p;

    double expectation = p / pow((1.0 - p), 2);

    cout << fixed << setprecision(6) << expectation << endl;
    
    return 0;
}
```
