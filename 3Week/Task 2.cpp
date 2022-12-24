#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;

    cout << "Введіть номер місяця : ";
    cin >> number;

    switch (number) {
    case 1: cout << "Січень, перший квартал"; break;
    case 2: cout << "Лютий, перший квартал"; break;
    case 3: cout << "Березень, перший квартал"; break;
    case 4: cout << "Квітень, другий квартал"; break;
    case 5: cout << "Травень, другий квартал"; break;
    case 6: cout << "Червень, другий квартал"; break;
    case 7: cout << "Липень, трейтій квартал"; break;
    case 8: cout << "Серпень, трейтій квартал"; break;
    case 9: cout << "Вересень, трейтій квартал"; break;
    case 10: cout << "Жовтень, четвертий квартал"; break;
    case 11: cout << "Листопад, четвертий квартал"; break;
    case 12: cout << "Грудень, четвертий квартал"; break;

    }

    return 0;
}
