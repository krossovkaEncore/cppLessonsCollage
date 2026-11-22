// 1.Используя библиотеку <cmath> вывести периметр и площадь квадрата. Ввод в консоль стороны a

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a;

    cout << "Введите сторону квадрата: ";
    cin >> a;

    cout << "Периметр: " << 4 * a << endl;
    cout << "Площадь: " << pow(a, 2) << endl;

    return 0;
}
