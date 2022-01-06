#include <iostream>
using namespace std;

int main() {
    int a, b, min;

    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;

    min = a;

    if(a%b == 0 || b%a == 0) {
        cout << a << " va " << b << " khong la so nguyen to cung nhau" << endl;
        return 0;
    } else {
        if(b < a) {
            min = b;
        }

        for(int i = 2; i < min; i++) {
            if(a%i == 0 && b%i == 0) {
                cout << a << " va " << b << " khong la so nguyen to cung nhau" << endl;
                return 0;
            }
        }
    }

    cout << a << " va " << b << " la so nguyen to cung nhau" << endl;

    return 0;
}