//Viết chương trình DistinctNumbers với nhiệm vụ đọc một chuỗi số từ input chuẩn (bàn phím) kết thúc ở số âm đầu tiên, và in ra các số đó theo đúng thứ tự, nhưng nếu có các số liền nhau cùng giá trị thì chỉ in ra một lần. Chương trình chỉ được dùng các biến kiểu cơ bản, không được dùng mảng, string, hay các cấu trúc dữ liệu khác.
//Ví dụ input:
//1 2 2 2 2 4 2 3 5 5 -1
//Output tương ứng:
//1 2 4 2 3 5 -1

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    cout << n << " ";

        while (m > 0 && n > 0)
    {
        cin >> m;
        if (m != n)
        {
            cout << m <<" ";
        }
        n = m;
    }
}
