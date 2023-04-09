#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> sieve_of_eratosthenes(int m, int n)
{
    vector<int> primes;
    vector<bool> sieve(n - m + 1, true);

    for (int p = 2; p * p <= n; p++)
    {
        int start = max(p * p, (m + p - 1) / p * p);
        for (int i = start; i <= n; i += p)
        {
            sieve[i - m] = false;
        }
    }

    if (m == 1)
        sieve[0] = false; // 1 is not a prime number

    for (int i = m; i <= n; i++)
    {
        if (sieve[i - m])
        {
            primes.push_back(i);
        }
    }

    return primes;
}

int main()
{
    int t;
    int m, n;
    cin >> t;

    while (t--)
    {
        cin >> m;
        cin >> n;

        vector<int> primes = sieve_of_eratosthenes(m, n);
        for (int prime : primes)
        {
            cout << prime << endl;
        }
        cout << endl;
    }

    return 0;
}
