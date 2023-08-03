#include <iostream>
using namespace std;
int main() {
    char a;
    double b,c;

    cin >> a >> b >> c;

    cout << fixed;
    cout.precision(2);

    cout << a << "\n";
    cout << b << "\n" << c;
    return 0;
}
