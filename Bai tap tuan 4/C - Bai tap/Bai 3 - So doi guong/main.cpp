#include <iostream>
#include <string>
using namespace std;

bool sodoiguong(int n)
{
    string str = to_string(n);
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left++] != str[right--])
            {
            return false;
        }
    }
    return true;
}

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t)
        {
        int A, B;
        cin >> A >> B;

        int count = 0;
        for (int n = A; n <= B; ++n)
            {
            if (sodoiguong(n))
            {
                ++count;
            }
        }
        cout << count << endl;
    }

    return 0;
}
