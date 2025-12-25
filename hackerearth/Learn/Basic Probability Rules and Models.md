DESCRIPTION
===========
<p align="justify">Mike wants to go fishing this weekend to nearby lake. His neighbour Alice (is the one Mike was hoping to ask out since long time) is also planing to go to the same spot for fishing this weekend. The probability that it will rain this weekend is <code>p<sub>1</sub></code>. There are two possible ways to reach the fishing spot (bus or train). The probability that Mike will take the bus is <code>p<sub>mb</sub></code> and that Alice will take the bus is <code>p<sub>ab</sub></code>. Travel plans of both are independent of each other and rain. <br/>
What is the probability <code>p<sub>rs</sub></code> that Mike and Alice meet each other only (should not meet in bus or train) in a romantic setup (on a lake in rain)?</p>

__Input constraints__ <br/>
<code>(0 <= p<sub>1</sub> <= 1)</code>, <br/>
<code>(0 <= p<sub>ab</sub> <= 1)</code>, <br/>
<code>(0 <= p<sub>mb</sub> <= 1)</code>

__Input format__ <br/>
First line: <code>p<sub>ab</sub></code>, <br/>
Second line: <code>p<sub>mb</sub></code>, <br/>
Third line: <code>p<sub>1</sub></code>

__Output format__ <br/>
<code>p<sub>rs</sub></code>, rounded up to six decimal places.

<br/>

SOLUTION
========
```cpp
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double p_ab, p_mb, p_1;
    cin >> p_ab >> p_mb >> p_1;

    double p_different_transport = p_mb * (1 - p_ab) + (1 - p_mb) * p_ab;
    double p_rs = p_1 * p_different_transport;

    cout << fixed << setprecision(6) << p_rs << endl;
    
    return 0;
}
```
