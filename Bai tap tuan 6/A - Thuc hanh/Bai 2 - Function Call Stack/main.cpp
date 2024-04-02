#include <iostream>

using namespace std;

int factorial(int x)
{
    cout << "Gia tri cua x: " << x << endl
         << "Dia chi cua x: " << &x <<endl;

    if (x == 0 || x == 1) return 1;
    else return x * factorial(x-1);
}

int main()
{
    int n;
    cout << "Nhap n: "; cin >> n;
    int k = factorial(n);
    cout << "Giai thua n: " << k << endl;
}
// Cac gia tri cua bien x giam dan;
