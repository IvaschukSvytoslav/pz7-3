#include <iostream>

// ������������ ����
template <typename T>
class UniversalClass {
private:
    T value1; // ����� ��������
    T value2; // ����� ��������

public:
    // �����������
    UniversalClass(T v1, T v2) : value1(v1), value2(v2) {}

    // ����� ��� ����������� ������� � ���� �����
    T findSmaller() {
        return (value1 < value2) ? value1 : value2;
    }

    // ����� ��� ������ ������� (������'�������, ��� �������� ����������)
    void displayValues() {
        std::cout << "Value 1: " << value1 << ", Value 2: " << value2 << std::endl;
    }
};

int main() {
    // ������� ������������ ����� � ������ �������
    UniversalClass<int> intExample(10, 20);
    intExample.displayValues();
    std::cout << "Smaller value: " << intExample.findSmaller() << std::endl;

    // ������� ������������ ����� � ������� � ��������� �������
    UniversalClass<double> doubleExample(5.5, 3.3);
    doubleExample.displayValues();
    std::cout << "Smaller value: " << doubleExample.findSmaller() << std::endl;

    return 0;
}
