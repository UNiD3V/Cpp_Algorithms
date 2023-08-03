#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n; //변수 선언,입력
    
    cout << fixed;
    cout.precision(2); // 소수점 둘째 자리 까지
    cout << n;
    return 0;
}