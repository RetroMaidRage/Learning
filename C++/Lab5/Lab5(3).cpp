#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x1, y1, x2, y2;
    cout << "Введіть координати точки 1 (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Введіть координати точки 2 (x2, y2): ";
    cin >> x2 >> y2;

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "Відстань між точкою 1 і точкою 2: " << distance << endl;

    return 0;
}
