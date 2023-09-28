#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // високосные годы до A (не включая A)
    int leapYearsA = (a - 1) / 4 - (a - 1) / 100 + (a - 1) / 400;
    // високосные годы до B (включая и A, и B, если они високосные)
    int leapYearsB = b / 4 - b / 100 + b / 400;
    // високосные годы на отрезке [a; b]
    int leapYears = leapYearsB - leapYearsA;

    cout << leapYears << endl;
    return 0;
}
