#include <iostream>
using namespace std;

int main()
{
    char mang[5] = {'a', 'b', 'c', 'd', 'e'};
    char a = 'f', b = 'g', c = 'h';

    mang[-1] = 'x';
    mang[5] = 'y';
    mang[6] = 'z';

    cout << "Gia tri cua cac bien sau khi ghi tran mang: " << endl
         << "a: " << a << endl
         << "b: " << b << endl
         << "c: " << c << endl;

    return 0;
}
