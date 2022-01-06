#include <iostream>
using namespace std;

struct DAY{
    int day, month, year;
};

void DAYinput(DAY &x) {
    cout << "Nhap ngay: ";
    cin >> x.day;
    cout << "Nhap thang: ";
    cin >> x.month;
    cout << "Nhap nam: ";
    cin >> x.year;
}

bool isLeap(int y) {
    if((y%4==0 && y%100!=0) || y%400==0) {
        return 1;
    } else {
        return 0;
    }
}

int Day(int y, int m) {
    switch(m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 2:
            if(isLeap(y))
                return 29;
            else 
                return 28;
            break;
        case 4: case 6: case 9: case 11:
            return 30;
            break;
        default:
            return 0;
            break;
    }
}

int main() {
    int cnt = 0;
    DAY be, af;

    cout << "Nhap ngay dau tien" << endl;
    DAYinput(be);
    cout << "Nhap ngay thu hai" << endl;
    DAYinput(af);

    if(be.month == af.month) 
        cnt = af.day - be.day;
    else {
        if(af.month == be.month + 1) {
        cnt += Day(be.year, be.month) - be.day;
        cnt += af.day;
        } else {
            for(int i = be.month + 1; i < af.month; i++) {
                cnt += Day(be.year, i);
            }
        }
    }

    cout << cnt << endl;
    
    return 0;
}