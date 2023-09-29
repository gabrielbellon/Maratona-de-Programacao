#include <bits/stdc++.h>

using namespace std;

const int maxn = 21;

int bad[maxn];

vector<int> grafo[maxn];

int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= m; i++)
	{
		int u, v;
		scanf("%d %d", &u, &v);

		u--, v--;
		grafo[u].push_back(v);
		grafo[v].push_back(u);
	}

	for (int i = 0; i < n; i++)
		for (auto v: grafo[i])
			bad[i] |= (1<<v);

	int ans = 0;

	for (int S = 1; S < (1<<n); S++)
	{
		int aux = 0;

		for (int i = 0; i < n; i++)
			if (S&(1<<i))
				aux |= bad[i];

		if (!(S&aux)) ans++;
	}

	printf("%d\n", ans);
}
