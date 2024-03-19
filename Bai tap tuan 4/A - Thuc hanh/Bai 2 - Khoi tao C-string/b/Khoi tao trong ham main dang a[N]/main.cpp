#include <iostream>

using namespace std;

int main()
{
    char a[3] = "ac";
  //dạng mảng
    for (int i = 0; i < 3; i++)
    {
        cout << a[i];
    }
    cout << endl;

  //dạng string
    cout << a << endl;

    return 0;
}
