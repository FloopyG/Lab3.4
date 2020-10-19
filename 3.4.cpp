// Lab3_4.cpp
// Огонюк Назар
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 12

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double R;
    double x;
    double y;

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    if ((y <= 0 && x >= 0 && x < R && y > -R && pow(x - R, 2) + pow(y + R, 2) > pow(R, 2)) ||
        (y >= 0 && x <= 0 && x > -R && y < R && pow(x + R, 2) + pow(y - R, 2) > pow(R, 2)))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    system("pause");
    cin.get();
    return 0;
}