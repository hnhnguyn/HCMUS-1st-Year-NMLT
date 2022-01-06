#include <iostream>
using namespace std;

bool isLeap(int y) {
    if((y%4==0 && y%100!=0) || y%400==0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int day, month, year, x;

    cout << "Nhap ngay: ";
    cin >> day;
    cout << "Nhap thang: ";
    cin >> month;
    cout << "Nhap nam: ";
    cin >> year;

    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
            x = 31;
            break;
        case 4: case 6: case 9: case 11: 
            x = 30;
            break;
        case 2: 
            if(isLeap(year)) {
                x = 29;
            } else {
                x = 28;
            }
            break;
        default: 
            cout << "Khong hop le" << endl;
            return 0;
    }

    if(day >= 0 && day <= x) {
        cout << "Hop le" << endl;
    } else {
        cout << "Khong hop le" << endl;
    }

    return 0;
}