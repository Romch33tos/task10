#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    setlocale(LC_ALL, "russian");
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cout << "Введите координаты точки A (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Введите координаты точки B (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Введите координаты точки C (x3, y3): ";
    cin >> x3 >> y3;
    cout << "Введите координаты точки D (x4, y4): ";
    cin >> x4 >> y4;

    double AB = distance(x1, y1, x2, y2);
    double CD = distance(x3, y3, x4, y4);
    double BC = distance(x2, y2, x3, y3);
    double AD = distance(x1, y1, x4, y4);

    if (AB == CD && BC == AD) {
        cout << "Четырехугольник является параллелограммом." << endl;
    } else {
        cout << "Четырехугольник не является параллелограммом." << endl;
    }

    return 0;
}
