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

    if (day == 1) {
		switch (month) {
		case 2: case 4: case 6: case 8: case 9: case 11:
			cout << "Ngay truoc do la : " << endl;
			cout << "Ngay 31 thang " << month - 1 << " nam " << year << endl;
			break;
		case 5: case 7: case 10: case 12:
			cout << "Ngay truoc do la : " << endl;
			cout << "Ngay 30 thang " << month - 1 << " nam " << year << endl;
			break;
		case 3:
			if (isLeap(year)) {
				cout << "Ngay truoc do la:" << endl;
				cout << "Ngay 29 thang 2 nam " << year << endl;
			}
			else {
				cout << "Ngay truoc do la:" << endl;
				cout << "Ngay 28 thang 2 nam " << year << endl;
			}
			break;
		case 1:
			cout << "Ngay truoc do la : " << endl;
			cout << "Ngay 31 thang 12 nam " << year - 1 << endl;
			break;
		}
	}
	else {
		cout << "Ngay truoc do la:" << endl;
		cout << "Ngay " << day - 1 << " thang " << month << " nam " << year << endl;
	}

    return 0;
}