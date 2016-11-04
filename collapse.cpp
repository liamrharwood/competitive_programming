#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

struct island {
  int thresh;
  bool alive = true;
  vector<pair<int,int>> deps;
};

vector<island> islands;
vector<int> rdeps[100001];

void chain(int I) {
  
  for (int i = 0; i < rdeps[I].size(); i++) {
    int total = 0;
    
    for (auto j : islands[rdeps[I][i]].deps) {
      if(islands[j.first].alive) {
        total += j.second;
      }
    }
    if (islands[rdeps[I][i]].alive && total < islands[rdeps[I][i]].thresh) {
      islands[rdeps[I][i]].alive = false;
      chain(rdeps[I][i]);
    }
  }

}

int main() {
  int N, T, K, S, V;

  island first;
  first.thresh = 0;
  first.alive = false;
  islands.push_back(first);

  cin >> N;
  for (int i = 0; i < N; i++) {
    rdeps[i] = vector<int>();
  }
  for (int i = 1; i <= N; i++) {
	  island current;
	  cin >> T >> K;
	  current.thresh = T;
	  vector<pair<int, int>> deps;
	  for (int j = 0; j < K; j++) {
	    cin >> S >> V;
	    rdeps[S].push_back(i);
	    deps.push_back(make_pair(S,V));
	  }
	  current.deps = deps;
	  islands.push_back(current);
  }
  islands[1].alive = false;

  chain(1);

  int total = 0;
  for (auto i : islands) {
     total += i.alive;
  }
  cout << total << endl;

}
 
