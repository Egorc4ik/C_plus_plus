#include <iostream>

using namespace std;

int main() {
    float x, y;

    cout << "������ ��������� �����(x y) :";
    cin >> x >> y;

    if (x <= -1 && x >= 0 && y <= 1 && y >= 0 ||
        x <= 1 && x >= 0 && y <= 1 && y >= 0)
        cout << "����� ��������� � ������ �������";
    else
        cout << "����� �� ��������� � ������ �������";
}