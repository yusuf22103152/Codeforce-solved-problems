//https://codeforces.com/contest/1471/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
 ios::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
	int t, n, x, z;
	cin >> t;
	while (t--)
	{
		cin >> n >> x;
		vector<int> v;
		map<int, int> mV;
		int vi = 0;
		bool add = true;
		long long int sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> z;
			if (add && z % x == 0)
			{
				v.push_back(z / x);
				mV[vi] = x;
				vi++;
			}
			else add = false;
			sum += z;
		}

		for (int i = 0; i < v.size(); i++)
		{
			if (add && v[i] % x == 0)
			{
				v.push_back((v[i] / x));
				mV[v.size() - 1] = mV[i] *x;
			}
			else add = false;
			sum += v[i] *mV[i];
		}

		cout << sum << endl;
	}
}