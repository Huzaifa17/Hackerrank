#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
	int i, j, k, m = n, l;
	int sum = 0;
	for (i = 2; i <= n; ++i)
	{
		if (n % i == 0)
		{
			while (n % i == 0) {
				j = i;
				while (j)
				{
					sum += (j % 10);
					j /= 10;
				}
				n /= i;
			}
		}
	}
	if (n > 1)
	{
		j = n;
		while (j)
		{
			sum += (j % 10);
			j /= 10;
		}
	}
	int sum2 = 0;
	while (m) {
		sum2 += m % 10;
		m /= 10;
	}
	if (sum2 == sum)
	{
		return 1;
	}
	return 0;
}


int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n;
	if (solve(n))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}
