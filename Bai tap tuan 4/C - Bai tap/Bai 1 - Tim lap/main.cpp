#include <iostream>

using namespace std;

int main()
{
    cout << "Nhap N: " << endl;
    int N;
    cin >> N;

    if (N <= 0 || N > 10000)
    {
    cout << "N khong hop le (0 < N <= 10000)." << endl;
    return 1;
    }
    bool seen[N + 1];
    for (int i = 0; i <= N; i++)
    {
        seen[i] = false;
    }
     int x;
    for (int i = 0; i < N; i++)
    {
       cout << "Nhap so thu " << i + 1 << ": ";
       cin >> x;
       if (seen[x])
       {
           cout << "Yes" << endl;
           return 0;
       }
       seen[x] = true;
    }

    cout << "No" << endl;
    return 0;
}
