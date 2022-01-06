#include <iostream>
using namespace std;

int main() {
    int n, check = 1;

    cout << "Nhap n: ";
    cin >> n;
    
    if(n < 2) {
        check = 0;
    } else {
        for(int i = 2; i < n; i++) {
            if(n%i == 0) {
                check = 0;
            }
        }
    }

    if(check) {
        cout << n << " la so nguyen to" << endl;
    } else {
        cout << n << " khong la so nguyen to" << endl;
    }

    return 0;
}