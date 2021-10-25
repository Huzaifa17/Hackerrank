#include <bits/stdc++.h>
using namespace std;
int main()
{
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int i, j, k, n, m, t;
  cin >> n >> m;
  int ans = m / 2;
  if (n % 2)
  {
    ans++;
  }
  if (m % 2)
  {
    ans *= ((m / 2) + 1);
  }
  else
  {
    ans *= (m / 2);
  }
  cout << ans << endl;
  return 0;
}
