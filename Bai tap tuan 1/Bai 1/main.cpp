#include <iostream>

using namespace std;

struct Monster {   // định nghĩa kiểu dữ liệu Monster
    string name;   // mỗi biến kiểu Monster có 03 mẩu dữ liệu name, x và y.
    int x;         // mỗi mẫu dữ liệu này gọi là một trường (field)
    int y;

    void moveNorth() {     //có hàm (hàm thành viên) để sửa dữ liệu của biến
        x -= 10;			// hàm này sửa x
    }
};                  //nhớ kết thúc bằng dấu chấm phảy

int main(int argc, char* argv[])
{
    Monster alex;		// khai báo một biến alex thuộc kiểu Monster
    alex.name = "Alex";     // gán giá trị cho các trường của biến alex
    alex.x = 100;
    alex.y = 101;

    alex.moveNorth();       //gọi hàm của alex
				     // đọc giá trị các trường của alex
    cout << alex.name << " is at (" << alex.x << "," << alex.y << ")";

    return 0;
}
