// Lab_03_4.cpp
// Колодій Андрій
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 15

#include <iostream>
using namespace std;

int main()
{
    double R;      // вхідний параметр - радіус
    double x;      // вхідний аргумент
    double y;      // вхідний параметр

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // розгалуження в повній формі
    if ((x >= -R && x <= 0 && y >= 0 && y <= R &&
        (x + R) * (x + R) + (y - R) * (y - R) >= R * R) ||
        (x >= 0 && y <= 0 && x * x + y * y <= R * R))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    return 0;
}