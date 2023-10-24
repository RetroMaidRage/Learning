

// Замість <iostream.h> треба використовувати <iostream> без .h
// Іункція main повинна бути оголошена через int, тому что вона повертає число (0)
// Замість y = myFunc(int) треба використовувати myFunc(x);
 
//Виправлений код
#include <iostream>
using namespace std;
int myFunc(int x);

int main() {
    int x, y;
    x = 5; // Приклад значення для x
    y = myFunc(x);
    cout << "Результат: " << y << endl;
    return 0;
}

int myFunc(int a) {
    return 4 * a;
}
