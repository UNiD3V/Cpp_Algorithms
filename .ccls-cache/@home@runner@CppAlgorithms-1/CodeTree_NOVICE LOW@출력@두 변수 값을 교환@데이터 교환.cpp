#include <iostream>
using namespace std;
int main() {
    int a = 5, b = 6, c=7;
    int temp_a, temp_b;
    temp_a = 5;
    temp_b = 6;
    a = c;
    c = temp_b;
    b = temp_a ;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}