#include <cstdio>
#include <queue>
#include <vector>
#include <tuple>
#include <functional>
#include <list>

using namespace std;

int n, m, q, s, i, u, v, w;
list<pair<int, int> > *adj;


vector<int> shortestPath(int src) {
	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
	vector<int> dist(n, 1000000000);

	pq.push(make_pair(0, src));
	dist[src] = 0;

	while(!pq.empty()) {
		int r = pq.top().second;
		pq.pop();

		list< pair<int, int> >::iterator it;
		for(it = adj[r].begin(); it != adj[r].end(); it++) {
			int t = it->first;
			int weight = it->second;

			if(dist[t] > dist[r] + weight) {
				dist[t] = dist[r] + weight;
				pq.push(make_pair(dist[t], t));
			}
		}
	}

	return dist;
}

int main() {
	bool flag = true;
	while(true) {
		scanf("%d %d %d %d", &n, &m, &q, &s);
		if(n == 0 && m == 0 && q == 0 && s == 0)
			break;

		if(flag)
			flag = false;
		else 
			printf("\n");

		adj = new list<pair<int, int> > [n];
		for(i = 0; i < m; i++) {
			scanf("%d %d %d", &u, &v, &w);
			adj[u].push_back(make_pair(v, w));
		}

		vector<int> dist = shortestPath(s);
		for(i = 0; i < q; i++) {
			scanf("%d", &w);
			if(dist[w] == 1000000000)
				printf("Impossible\n");
			else 
				printf("%d\n", dist[w]);
		}
	}


	return 0;
}