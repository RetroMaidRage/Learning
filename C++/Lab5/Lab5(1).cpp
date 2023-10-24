#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cout << "Введіть a, b, і c: ";
    cin >> a >> b >> c;

    double D = b * b - 4 * a * c;

    if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Корені: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (D == 0) {
        double x1 = -b / (2 * a);
        cout << "Єдиний корінь: x1 = " << x1 << endl;
    }
    else {
        cout << "Немає дійсних коренів." << endl;
    }

    return 0;
}
