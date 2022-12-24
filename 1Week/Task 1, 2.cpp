#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	//Приклад 18
	int a18 = 1;
	float b18 = 0.001;
	float y18;

	y18 = pow(a18 - b18 / b18 + a18 * exp(log(a18 - b18) * M_PI / 8) / 0.137, 1. / 3);
	cout << "Приклад номер 18: " << y18 << "\n";

	//Приклад 23
	int a23 = 4;
	float b23 = 3.141;
	float y23;

	y23 = 0.75 * exp(1 - b23) + 0.31 * exp(1 - a23) / 0.731 + pow(sin(b23 / a23 * M_PI), 2);
	cout << "Приклад номер 23: " << y23 << "\n";

	return 0;
}
