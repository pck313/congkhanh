#include <iostream>

using namespace std;

char a[10];

int main()
{
    cout << "Dang mang: " << endl;
    for (int i = 0; i < 10; i++)
    {
         cout << a[i];
    }

    cout << endl << "Dang string: " << endl;
    cout << a << endl;

    return 0;
}
