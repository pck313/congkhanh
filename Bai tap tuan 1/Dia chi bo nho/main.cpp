#include <iostream>

using namespace std;

struct Monster
{
    string name;
    int x,y;
};
int main()
{
    Monster alex;

    int x = 10;
    cout<<&x<<endl;
    int y = 2;
    cout << &y << endl;
    char z = 'khanh';
    cout << (void*)&z;
}
