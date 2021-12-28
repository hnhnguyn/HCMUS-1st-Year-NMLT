#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

void B1() {
    cout << "In progress..." << endl;

}

struct VanDongVien {
    int maSo;
    float canNang; // don vi kg
    float chieuCao; // don vi m
};

void VDVinput(VanDongVien &x) {
    cout << "Nhap ma so: ";
    cin >> x.maSo;
    cout << "Nhap chieu cao: ";
    cin >> x.chieuCao;
    cout << "Nhap can nang: ";
    cin >> x.canNang;
}

float bmi(VanDongVien x) {
    float bmi;

    bmi = x.canNang / (x.chieuCao * x.chieuCao);

    return bmi;
}

void Remove(VanDongVien danhSachVDV[], int &n) {
    for(int i = 0; i < n; i++) {
        if(bmi(danhSachVDV[i]) >= 18.5 && bmi(danhSachVDV[i]) <= 24.9) {
            for(int j=i+1; j<n; j++) {
                danhSachVDV[j - 1] = danhSachVDV[j];
            }
            i = 0;
            n--;
        }
    }
}

void B2() {
    VanDongVien danhSachVDV[1000];
    int n;
    cout << "Nhap so van dong vien: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Van dong vien thu " << i+1 << endl;
        VDVinput(danhSachVDV[i]);
    }

    Remove(danhSachVDV, n);

    cout << "Ma so van dong vien khong dat tieu chuan la: " << endl;
    for (int i = 0; i < n; i++) {
        cout << danhSachVDV[i].maSo << " ";
    }

    cout << endl;
}

void B3() {
    int words = 0, cnt = 1, k = 0, lesscnt = 0;
    string s, word[1000];

    ifstream in;

    in.open("paragraph.txt");
    while(getline(in, s)) {
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ' ') {
                cnt++;
            }
        }
        words+=cnt;
        cnt = 1;
    }
    cout << "So tu co trong doan van ban la: " << words << endl;
    in.close();

    in.open("paragraph.txt");
    while(in >> s) {
        word[++k] = s;
        if(s.size() < 3) {
            lesscnt++;
        }
    }
    cout << "So tu co it hon 3 ky tu la: " << lesscnt << endl;

    for(int i = 1; i <= k; i++) {
        for(int j = i + 1; j <= k; j++) {
            if(word[i] == word[j]) {
                for(int m = j; m <= k; m++) {
                    word[m] = word[m+1];
                }
                j -= 1;
                k--;
            }
        }
    }
    cout << "So tu khac nhau la: " << k << endl;
    in.close();
}

int FindKey(string text) {
    int sum = 0, n;

    for(int i=0; i < text.size() - 1; i++) {
        if(text[i] <= 57 && text[i] >= 48 && text[i+1] <= 57 && text[i+1] >= 48) {
            n = (text[i]-48) * 10 + (text[i+1]-48);
            if(n > 10) {
                for(int i = 2; i < n; i++) {
                    if(n % i == 0) {
                        n = 0;
                    }
                }
                sum+=n;
            }
        }
    }

    return sum;
}

void B4() {
    string text;
    cout << "Nhap van ban: ";
    cin >> text;

    cout << FindKey(text) << endl;

}

int main() { 
    int state = 5;

    cout << "Cau 1: nhap 1" << endl;
    cout << "Cau 2: nhap 2" << endl;
    cout << "Cau 3: nhap 3" << endl;
    cout << "Cau 4: nhap 4" << endl;
    cout << "Thoat: nhap 0" << endl;

    do {
        cout << "Nhap so: ";
        cin >> state;

        if(state == 1) {
            B1();
        } else if(state == 2) {
            B2();
        } else if(state == 3) {
            B3();
        } else if(state == 4) {
            B4();
        }
    } while (state != 0);
    
    return 0;
}