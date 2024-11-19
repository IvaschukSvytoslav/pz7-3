#include <iostream>

// Універсальний клас
template <typename T>
class UniversalClass {
private:
    T value1; // перше значення
    T value2; // друге значення

public:
    // Конструктор
    UniversalClass(T v1, T v2) : value1(v1), value2(v2) {}

    // Метод для знаходження меншого з двох чисел
    T findSmaller() {
        return (value1 < value2) ? value1 : value2;
    }

    // Метод для виводу значень (необов'язковий, для зручності тестування)
    void displayValues() {
        std::cout << "Value 1: " << value1 << ", Value 2: " << value2 << std::endl;
    }
};

int main() {
    // Приклад використання класу з цілими числами
    UniversalClass<int> intExample(10, 20);
    intExample.displayValues();
    std::cout << "Smaller value: " << intExample.findSmaller() << std::endl;

    // Приклад використання класу з числами з плаваючою крапкою
    UniversalClass<double> doubleExample(5.5, 3.3);
    doubleExample.displayValues();
    std::cout << "Smaller value: " << doubleExample.findSmaller() << std::endl;

    return 0;
}
