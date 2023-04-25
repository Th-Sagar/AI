#include <iostream>
using namespace std;
int main()
{
    int n, total = 1, a;
    cout << "enter number for factorial :";
    cin >> n;
    a = n;
top:

    if (a != 0)
    {
        total *= a;
        a -= 1;
        goto top;
    }
    cout << "factorial of " << n << " is " << total;
}