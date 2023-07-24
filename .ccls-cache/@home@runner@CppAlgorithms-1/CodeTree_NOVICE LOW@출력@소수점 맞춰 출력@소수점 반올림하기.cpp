#include <iostream>
using namespace std;
int main() {
    double a = 25.352;

    cout << fixed; //cout << fixed, cout.precision(n) 을 사용하면, 소수점 n 째자리까지 값을 반올림하여 출력
    cout.precision(1);

    cout << a;
    return 0;
}