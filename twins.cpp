#include <bits/stdc++.h>
using namespace std;
int prime[1000001];

std::vector<int> sieve(int n)
{
    int i, j, k, m = sqrt(n) + 1;
    std::vector<int> pri;
    if (m < 2)
    {
        return pri;
    }
    pri.push_back(2);
    for (i = 3; i <= m; i += 2)
    {
        if (!prime[i])
        {
            pri.push_back(i);
            for (j = i * i; j <= m; j += (2 * i))
            {
                prime[j] = 1;
            }
        }
    }
    return pri;
}

int segsieve(int n, int m)
{
    std::vector<int> v = sieve( m);
    int i, j, k, count = 0;
    int arr[m - n + 1] = {0};
    if (n == 1)
    {
        arr[0] = 1;
    }
    for (i = 0; i < v.size(); ++i)
    {
        int base = (n / v[i]) * v[i];
        if (base < n)
        {
            base += v[i];
        }
        for (j = base; j <= m; j += v[i])
        {
            arr[j - n] = 1;
        }
        if (v[i] == base)
        {
            arr[base - n] = 0;
        }
    }
    for (i = 0; i < m - n + 1; ++i)
    {
        if (!arr[i] && ((i + 2) < m - n + 1) && !arr[i + 2])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int i, j, k, n, m, t;
    cin >> n >> m;
    cout << segsieve(n, m) << endl;
    return 0;
}
