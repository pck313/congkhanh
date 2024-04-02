#include <iostream>

using namespace std;

int main()
{
    int a[5];
    char b[5];

    cout << "Dia chi 3 phan tu lien tiep mang a: " << endl;
    for (int i=0; i < 3; i++) cout << &a[i] << endl;

    cout << "Dia chi 3 phan tu lien tiep mang b: " << endl;
    for (int i=0; i < 3; i++) cout << (void*)&b[i] << endl;

    //Dia chi cac phan tu lien liep cua mang a va b tang dan lien tuc;
    int x, y;

    cout << "Khai bao them bien truoc va sau cac mang: " << endl;

    cout << "Dia chi cua bien x: " << &x << endl;
    cout << "Dia chi cac phan tu mang a: " << endl;
    for (int i=0; i < 3; i++) cout << &a[i] << endl;

    cout << "Dia chi cua bien y: " << &y << endl;

    char m, n;
    cout << "Dia chi cua bien m: " << (void*)&m << endl;
    cout << "Dia chi cac phan tu mang b: " << endl;
    for (int i=0; i < 3; i++) cout << (void*)&b[i] << endl;
    cout << "Dia chi cua bien n: " << (void*)&n << endl;
}
