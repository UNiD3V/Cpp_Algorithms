#include <iostream>
using namespace std;
int main() {
    double a = 30.48; //피트
    double b = 160934; //마일 

    cout << fixed;
    cout.precision(1); //소수점 첫째짜리 까지 

    cout << 9.2 << "ft = " << 9.2 * a << "cm";
    cout << endl;
    cout << 1.3 << "mi = " << 1.3 * b << "cm";
    return 0;
}