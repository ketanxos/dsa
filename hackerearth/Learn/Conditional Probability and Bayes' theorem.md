```cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double p_ct, p_ot;
    int N;

    cin >> p_ct;
    cin >> p_ot;
    cin >> N;

    double p_no_trouble_on_time = (1 - p_ct) * p_ot;
    double p_trouble_on_time = p_ct * (2.0 / N);
    double p_on_time = p_no_trouble_on_time + p_trouble_on_time;

    cout << fixed << setprecision(6) << p_on_time << endl;

    return 0;
}
```
