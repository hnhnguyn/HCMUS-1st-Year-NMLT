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
    int day, month, year;

    cout << "Nhap ngay: ";
    cin >> day;
    cout << "Nhap thang: ";
    cin >> month;
    cout << "Nhap nam: ";
    cin >> year;

    if (day == 31) {
		if (month == 12) {
			cout << "Ngay sau do la:" << endl;
			cout << "Ngay 1 thang 1 nam " << year + 1 << endl;
		}
		else {
			cout << "Ngay sau do la:" << endl;
			cout << "Ngay 1 thang " << month + 1 << " nam " << year << endl;
		}
	}
	else if (day == 29 && month == 2) {
		cout << "Ngay sau do la:" << endl;
		cout << "Ngay 1 thang 3 nam " << year << endl;
	}
	else if (day == 28 && month == 2 && isLeap(year)) {
		cout << "Ngay sau do la:" << endl;
		cout << "Ngay 1 thang 3 nam " << year << endl;
	}
	else {
		cout << "Ngay sau do la:" << endl;
		cout << "Ngay " << day + 1 << " thang " << month << " nam " << year << endl;
	}

    return 0;
}