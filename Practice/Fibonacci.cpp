#include <iostream>
using namespace std;

int Fibonacci(int n) {
    if(n == 1)
        return 0;
    else if(n == 2)
        return 1;
    
    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main() {
    int N;

    cout << "Nhap N: ";
    cin >> N;

    cout << Fibonacci(N);

    return 0;
}