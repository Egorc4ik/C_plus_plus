#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x;
    int b;
    int c;
    float Y;

    cin >> x;

    if (x < 2) {
        Y = x - 9 * b * x / x - 2 * b * x;
    }
    else if (x > 2)
    {
        Y = x - 2 * c * x / x - 5 * c * pow(x, 3);
    }

    cout << Y;

    return(0);
}