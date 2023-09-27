#include <comcat.h>
#include <iostream>
using namespace std;

int reverse(int x)
{
    long long res = 0;
    while (x)
    {
        res *= 10;
        res += x % 10;
        x /= 10;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    long long a, b, res;

    while (n--)
    {
        cin >> a >> b;
        res = reverse(reverse(a) + reverse(b));
        cout << res << endl;
    }

    return 0;
}