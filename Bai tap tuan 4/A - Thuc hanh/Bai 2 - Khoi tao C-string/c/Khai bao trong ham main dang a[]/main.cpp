#include <iostream>

using namespace std;

int main()
{
    char a[] = "abcd";

  //dạng mảng
    for (int i = 0; i < sizeof(a); i++)
    {
        cout << a[i];
    }
    cout << endl;

  //dạng string
    cout << a << endl;

  //kích thước mảng thực
    cout << "Kich thuc mang: " << sizeof(a) << endl;

    return 0;
}
