#include <iostream>
using namespace std;
int main() {
    double a = 5.26;
    double b = 8.27;

    cout << fixed;
    cout.precision(3); //셋째자리 까지 반올림 해서 출력

    cout << a * b;
    return 0;
}