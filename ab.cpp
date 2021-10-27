#include <bits/stdc++.h>
using namespace std;
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int i, j, k, n, m, t;
  long long d1, d2, x, a, b, div, ans;
  cin >> t;
  for (i = 0; i < t; ++i)
  {
    cin >> a >> b >> x;
    ans = pow(a, b);
    div = ans / x;
    d1 = ans - (div * x);
    d2 = ((div + 1) * x) - ans;
    if (d1 < d2)
    {
      cout << div*x << endl;
    }
    else
    {
      cout << ((div + 1)*x) << endl;
    }
  }
  return 0;
}
