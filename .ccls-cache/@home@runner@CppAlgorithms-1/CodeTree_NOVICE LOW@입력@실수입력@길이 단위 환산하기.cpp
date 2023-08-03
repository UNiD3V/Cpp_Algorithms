#include <iostream>
using namespace std;
int main() {
    double n; //변수 선언
    cin >> n; //변수 입력

    cout << fixed;
    cout.precision(1);

    cout << n * 30.48;
    return 0;
}