#include <iostream>
using namespace std;

int main() {
    float a1, b1, c1, a2, b2, c2, d, dx, dy;

    cout << "He phuong trinh 2 an: " << endl;
    cout << "ax + by = c" << endl;
    cout << "a'x + b'y = c'" << endl;
    cout << "Nhap a: ";
    cin >> a1;
    cout << "Nhap b: ";
    cin >> b1;
    cout << "Nhap c: ";
    cin >> c1;
    cout << "Nhap a': ";
    cin >> a2;
    cout << "Nhap b': ";
    cin >> b2;
    cout << "Nhap c': ";
    cin >> c2;
    
    d = a1*b2 - a2*b1;
    dx = c1*b2 - c2*b1;
    dy = a1*c2 - a2*c1;

    if(d == 0) {
        if(dx == 0 && dy == 0) {
            cout << "He phuong trinh co vo so nghiem" << endl;
        } else {
            cout << "He phuong trinh vo nghiem" << endl;
        }
    } else {
        cout << "He phuong trinh co 1 nghiem la x = " << dx/d << " va y = " << dy/d << endl;
    }
    
    return 0;
}