//Viết chương trình Prime đọc vào một số và in ra 'yes' nếu đó là một số nguyên tố. Nếu không thì in ra 'no'.

#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    int k=0;
    cin>>n;
    if(n<=0||n==1)cout<<"no";
    else
    {
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) k++;
    }
    if(k>0)cout<<"no";
    else cout<<"yes";
    }
}
