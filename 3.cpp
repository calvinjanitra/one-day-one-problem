#include <iostream>
using namespace std;

int main()
{
    int n;
    int total = 0, temp = 0;
    cin >> n;
    int number;
    for (int i = 1; i <= n; i++)
    {
        total += i;
    }
    for (int i = 1; i < n; i++)
    {
        cin >> number;
        temp += number;
    }
    cout << total - temp << endl;
    return 0;
}