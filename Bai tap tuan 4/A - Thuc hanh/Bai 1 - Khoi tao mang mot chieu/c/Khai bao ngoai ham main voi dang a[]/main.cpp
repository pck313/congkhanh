#include <iostream>

using namespace std;

    int a[] = {1, 2, 3, 4};

int main()
{
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
      cout << a[i] << " ";
    }
}
