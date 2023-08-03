#include <iostream>
using namespace std;
int main() {
    double n; //변수 선언
    cin >> n; //변수 입력
    
    n = n+1.5;
    cout << fixed;
    cout.precision(2); //소수점 둘째자리 까지
    cout << n;
    return 0;
}