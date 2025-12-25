DESCRIPTION
===========
<p align="justify">Bob has an important meeting tomorrow and he has to reach office on time in morning. His general mode of transport is by car and on a regular day (no car trouble) the probability that he will reach on time is <code>p<sub>ot</sub></code>. The probability that he might have car trouble is <code>p<sub>ct</sub></code>. If the car runs into trouble he will have to take a train and only 2 trains out of the available <code>N</code> trains will get him to office on time. <br/>
What are the chances that he will reach office on time tomorrow?</p>

__Input constraints__ <br/>
<code>(0 <= p<sub>ct</sub> <= 1)</code>, <br/>
<code>(0 <= p<sub>ot</sub> <= 1)</code>, <br/>
<code>(N >= 2)</code>

__Input format__ <br/>
First line: <code>p<sub>ct</sub></code>, <br/>
Second line: <code>p<sub>ot</sub></code>, <br/>
Third line: <code>N</code>

__Output format__ <br/>
Probability he will reach in time, rounded to six decimal digits.

<br/>

SOLUTION
========

```cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double p_ct, p_ot;
    int N;

    cin >> p_ct >> p_ot >> N;

    double p_no_trouble_on_time = (1 - p_ct) * p_ot;
    double p_trouble_on_time = p_ct * (2.0 / N);
    double p_on_time = p_no_trouble_on_time + p_trouble_on_time;

    cout << fixed << setprecision(6) << p_on_time << endl;

    return 0;
}
```
