DESCRIPTION
===========
<p align="justify">Probability that Alice will accidentally drop her phone to ground is <code>p</code>. She will not be careful after any no.of unfortunate events. Let <code>X</code> be the random variable that equals to the no. of times Alice drops her phone. <br/>
Write a program to calculate the expectation value, <code>E(X)</code>.</p>

__Input constraints__ <br/>
<code>(0 < p < 1)</code>

__Input format__ <br/>
First line: <code>p</code>

__Output format__ <br/>
<code>E(X)</code>

<br/>

SOLUTION
========
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
