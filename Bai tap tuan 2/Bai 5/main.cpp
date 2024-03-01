//Viết chương trình NumberToEnglish với nhiệm vụ đọc từ bàn phím một số trong khoảng từ -999.999.999 tới 999.999.999 và in ra cách đọc số đó bằng tiếng Anh. Bạn cần dùng đến các từ: negative, zero, one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen, seventeen, eighteen, nineteen, twenty, thirty, forty, fifty, sixty, seventy, eighty, ninety, hundred, thousand, million.


#include <iostream>
#include<cmath>

using namespace std;

string s0[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string s1[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string s2[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string zero (int n)
{
    if (n == 0) return "zero";
}
string donvi (int n)
{
    return s0[n];
}
string chuc (int n)
{
    if(n%100<20)
    {
        if(n%100/10 == 1)
        {
            if(n%10==0) return "ten";
            else return s1[n%10];
        }
    }
    else return s2[n/10] + " " + s0[n%10];
}
string tram (int n)
{
    if (n/100 == 0)
    {
        if(n%100/10 == 0) return donvi(n%10);
        else return chuc(n%100);
    }
    else
    {
    if ((n%100)/10 > 0)
    {
        if ((n%100)/10 >= 2) return s0[n/100] + " hundred " + s2[(n%100)/10] + " " + s0[n%10];
        else
        {
            if (n%10 > 0) return s0[n/100] + " hundred " + s1[n%10];
            else return s0[n/100] + " hundred " + s1[0];
        }
    }
    else return s0[n/100] + " hundred " + s0[n%10];
    }
}
string nghin (int n)
{
    if (n/100000 == 0)
    {
        if (n/10000 == 0) return donvi(n/1000%10) + " thousand " + tram(n%1000);
        else return chuc (n/1000%100) + " thousand " + tram(n%1000);
    }
    else return tram(n/1000) + " thousand " + tram(n%1000);
}
string trieu (int n)
{
    if(n/100000000 == 0)
    {
        if(n/10000000 == 0) return donvi (n/1000000%10) + " million " + nghin(n%1000000);
        else return chuc (n/1000000%100) + " million " + nghin(n%1000000);
    }
    else return tram (n/1000000) + " million " + nghin(n%1000000);
}
int demchuso (int n)
{
    int m = abs(n);
    int dem = 1;
    while (m/10>0)
    {
        m=m/10;
        dem++;
    }
    return dem;
}
string duong(int n)
{
    int t = demchuso(n);
    if (n==0) return zero(n);
    else if (t==1) return donvi (n);
    else if (t==2) return chuc (n);
    else if (t==3) return tram (n);
    else if (4<=t&&t<=6) return nghin (n);
    else return trieu (n);
}
string numbertoenglish (int n)
{
    if (n>=0) return duong (n);
    else
    {
        n = abs(n);
        return "negative " + duong (n);
    }
}
int main()
{
    int n;
    cout<<"Nhap so nguyen bat ki tu -999999999 den 999999999: "<<endl;
    cin >> n;
    if (demchuso(n)>9) cout << "So nhap vao khong hop le!" << endl;

    cout<<"Cach doc so nay trong tieng anh: "<<endl;
    cout << numbertoenglish(n);
}
