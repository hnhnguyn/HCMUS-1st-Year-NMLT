#include <iostream>
#include <cmath>
using namespace std;

int GCD(int a, int b) {
    if(a%b == 0) 
        return b;
    else if(b == 0)
        return a;
    
    return GCD(b, a%b);
}

int main() {
    int a, b, tmp;

    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;

    if(a == 0 && b == 0)
        return 0;
    if(abs(b) > abs(a)) {
        tmp = a;
        a = b;
        b = tmp;
    }

    cout << "Uoc chung lon nhat la: " << GCD(abs(a), abs(b)) << endl;

    return 0;
}