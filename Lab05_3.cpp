#include <iostream>
#include <cmath>
using namespace std;

double f(const double x);

int main() {
    double tp, tk;
    int n;

    cout << "tp: "; cin >> tp;
    cout << "tk: "; cin >> tk;
    cout << "n: "; cin >> n;

    double dt = (tk - tp) / n;
    double t = tp;


    cout << "-----------------------------------------------" << endl;
    cout << "|    t    |    The meaning of the expression  |" << endl;
    cout << "-----------------------------------------------" << endl;

    while (t <= tk) {
        double result = f(2 * t) + pow(f(t * t + 1), 2);
        cout << "| " << t << "       | " << result << "                          |" << endl;
        t += dt;
    }
    cout << "-----------------------------------------------" << endl;

    return 0;
}

double f(const double x) {
    if (abs(x) >= 1) {
        return (sin(2 * x) + 1) / (sin(x) + pow(cos(x), 2));
    }
    else {
        double S = 0;
        double a = 1;
        S = a;

        for (int n = 0; n <= 7; ++n) {
            if (n > 0) {
                a *= (x * x) / ((2 * n + 1) * (2 * n + 1));
            }
            S += a;
        }

        return S;
    }
}
