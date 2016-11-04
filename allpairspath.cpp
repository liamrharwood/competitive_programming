#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, m, q, u, v, w, i, j, k;

	while(true) {
		cin >> n >> m >> q;
		if(n==0 && m==0 && q==0)
			break;

		int G[n][n];

		for(i=0; i < m; i++) {
			cin >> u >> v >> w;
			G[u][v] = w;
		}

		for(k=0; k < n; k++) {
			for(i=0; i < n; i++) {
				for(j=0; j < n; j++) {
					G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
				}
			}
		}

		for(i=0; i < q; q++) {
			cin >> u >> v;
			cout << u << " " << v << endl;
			if(G[u][v]) {
				cout << G[u][v] << endl;
			}
		}
	}

}