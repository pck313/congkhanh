#include <iostream>

using namespace std;

int main()
{
    char mang[5] = {'a', 'b', 'c', 'd', 'e'};
    char a = 'f', b = 'g', c = 'h';

    cout << "Doc tran mang: " << endl;
    cout << "Mang[-1]: " << mang[-1] << endl
         << "Mang[5]: " << mang[5] << endl
         << "Mang[6]: " << mang[6] << endl;

    cout << "Thay doi thu tu khai bao bien va mang: " << endl;
    char mang2[5] = {'i', 'j', 'k', 'l', 'm'};

    cout << "Gia tri cua cac bien: " << endl
         << "a: " << a << endl
         << "b: " << b << endl
        << "c: " << c << endl;

    return 0;
}
