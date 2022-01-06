#include <iostream>
using namespace std;

void ascending(int a[], int n) {
    int tmp;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
}

void descending(int a[], int n) {
    int tmp;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] < a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
}

void evenasodddes(int a[], int n) {
    int tmp;
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i]%2 == 0 && a[j]%2 == 0 && a[i] > a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            } else if(a[i]%2 != 0 && a[j]%2 != 0 && a[i] < a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
}

int main() {
    int a[1000];
    int n;

    cout << "Nhap so phan tu: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 <<": ";
        cin >> a[i];
    }

    cout << "Chan tang le giam: " << endl;
    evenasodddes(a, n);
    cout << "Tang dan: " << endl;
    ascending(a, n);
    cout << "Giam dan: " << endl;
    descending(a, n);

    return 0;
}