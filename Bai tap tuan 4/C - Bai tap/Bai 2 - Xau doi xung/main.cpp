#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Nhap xau: ";
    cin >> str;

    if (str.length() > 100)
    {
        cout << "Xau qua dai (toi da 100 ky tu)." << endl;
        return 1;
    }
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    int i = 0, j = str.length() - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            cout << "No" << endl;
            return 0;
        }
        i++;
        j--;
    }
    cout << "Yes" << endl;

    return 0;
}
