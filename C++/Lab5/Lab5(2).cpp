#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, angle;
    cout << "Введіть довжину першої сторони a: ";
    cin >> a;
    cout << "Введіть довжину другої сторони b: ";
    cin >> b;
    cout << "Введіть кут між ними в градусах: ";
    cin >> angle;

    // Перетворення градусів в радіани
    double radians = angle * M_PI / 180.0;

    // Використання косинусу для знаходження третьої сторони
    double c = sqrt(a * a + b * b - 2 * a * b * cos(radians));

    cout << "Третя сторона трикутника: " << c << endl;

    return 0;
}
