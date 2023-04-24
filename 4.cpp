#include <iostream>
#include <string>
using namespace std;

int max_num(int num, int digit)
{
    string num_str = to_string(num);
    int max_num = 0;

    for (int i = 0; i <= num_str.length(); i++)
    {
        string new_num_str = num_str.substr(0, i) + to_string(digit) + num_str.substr(i);
        int new_num = stoi(new_num_str);
        max_num = max(max_num, new_num);
    }
    return max_num;
}

int main()
{
    int n;
    cin >> n;
    int num, digit;
    int a;
    while (n--)
    {
        cin >> a;
        cin >> num >> digit;
        int max = max_num(num, digit);
        cout << max << endl;
    }
}