#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long b = 1;
    
    for (int a = 1; a <= 20; a++) {
        if(a % 2 == 0){
            b *= a;
            cout << b << endl;
        }
    }

}