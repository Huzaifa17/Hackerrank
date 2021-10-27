#include <bits/stdc++.h>
using namespace std;

long long solve(int n, int m) {
	long long n1 = n, m1 = m;
	long long r1, r2 = n1 - 1 + (m1 - 1) * n1;
	r1 = m1 - 1 + (n1 - 1) * m1;
	if (r2 <= r1)
	{
		return r2;
	}
	return r1;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n >> m;
	cout << solve(n, m) << endl;
	return 0;
}
