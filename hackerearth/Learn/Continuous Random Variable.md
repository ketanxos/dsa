DESCRIPTION
===========
<p align="justify">Alice has to wait for her husband at the station and <code>X</code> denotes the times elapsed before he arrives. If given that <code>X</code> is exponentially distributed with &lambda; = 0.01, what is the probability that Alice has to wait for more than <code>N</code> mins <code>(P(X >= N))</code>.

__Input constraints__ <br/>
<code>(N >= 0)</code>, <br/>

__Input format__ <br/>
First line: <code>N</code>

__Output format__ <br/>
Probability of waiting for <code>N</code> minutes, rounded up to six decimal places.

<br/>

SOLUTION
========
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