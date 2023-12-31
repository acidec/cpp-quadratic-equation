#include <iostream>
#include <cmath>
using namespace std;
void nya(double a, double b, double c) {
    long double delta = (b * b) - (4.0 * a * c);
    if (delta > 0.0) {
        long double x1 = ((-b) + sqrt(delta)) / (2.0 * a);
        long double x2 = ((-b) - sqrt(delta)) / (2.0 * a);
        cout << "Two results: x1 = " << x1 << "; x2 = " << x2 << "." << endl;
    }
    if (delta == 0.0) {
        long double x = (-b) / (2.0 * a);
        cout << "One result: x = " << x << "." << endl;
    }
    if (delta < 0.0) {
        cout << "No result." << endl;
    }
}
int main() {
    long double a, b, c;
    char r;
    while(true) {
        cout << "Please input a = ";
        cin >> a;
        cout << "Please input b = ";
        cin >> b;
        cout << "Please input c = ";
        cin >> c;

        nya(a, b, c);
        cout << "Continue?[Y/n]" << endl;
        cin >> r;
        if (r == 'n') {
            break;
        }
    }
    return 0;
}