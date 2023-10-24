#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Ініціалізуємо генератор випадкових чисел
    std::srand(static_cast<unsigned int>(std::time(nullptr));

    for (int i = 0; i < 5; i++) {
        int random_number = std::rand();
        std::cout << "Випадкове число " << i + 1 << ": " << random_number << std::endl;
    }

    return 0;
}
