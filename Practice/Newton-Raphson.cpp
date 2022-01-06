#include <iostream>
#include <cmath>
using namespace std;

//Equation: x^2021 + 2021x - 1 = 0

int main() {
    float x = 1, sum;
    int i = 0;

    while(i < 10000) {
        sum = x - (pow(x, 2021) + 2021*x - 1)/(2021*pow(x, 2020) + 2021);
        x = sum;
        i++;
    }

    cout << x << endl;

    return 0;
}