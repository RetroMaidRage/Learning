#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char buffer[100]; // Рядок С-стилю для збереження введеного тексту
    cout << "Введіть рядок: ";
    cin.getline(buffer, sizeof(buffer));

    // Перетворення рядка на ціле число
    int integer_number = atoi(buffer);

    // Перетворення рядка на довге число
    long long_number = atol(buffer);

    // Перетворення рядка на речове число
    double double_number = atof(buffer);

    cout << "Ціле: " << integer_number << endl;
    cout << "Довге: " << long_number << endl;
    cout << "Речове: " << double_number << endl;

    return 0;
}
