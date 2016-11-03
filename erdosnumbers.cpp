#include <string>
#include <iostream>
#include <sstream>
#include <queue>
#include <vector>
#include <tuple>
#include <functional>
#include <list>
#include <map>

using namespace std;

map<string, vector<string> > adj;
map<string, bool> visited;
int k;

int BFS(string src){ // source and destination, returns the length of the shortest path between src and dest if reachable, otherwise returns -1
   queue<string> q;
   int level = 0, nextNodes = 0, currentNodes = 1;
   q.push(src); // q = PAUL_ERDOS
   visited[src] = true; // visited[PAUL_ERDOS] = true
   while(!q.empty()){
     string current = q.front();  // current = PAUL_ERDOS
     q.pop(); // q =
     currentNodes--; // currentNodes = 0
     for(k = 0 ; k < adj[current].size(); k++){ 
       if(!visited[adj[current][k]]) { // 
         q.push(adj[current][k]);
         visited[adj[current][k]] = true;
         nextNodes++;
         if(adj[current][k] == "PAUL_ERDOS")
         	return level + 1;
       }
     }
     if(!currentNodes) {
     	currentNodes = nextNodes;
     	nextNodes = 0;
     	level++;
     }
   }
   return -1;
 }


int main() {
	int i, j, dist;
	string line, token;
	vector<string> people;
	vector<string> testPeople;

	while(getline(cin, line)) {
		stringstream ss;
		ss << line;
		ss >> token;
		testPeople.push_back(token);
		people.push_back(token);

		while(ss >> token) {
			people.push_back(token);
		}

		for(i = 0; i < people.size(); i++) {
			for(j = 0; j < people.size(); j++) {
				if(people[i] != people[j] || people[j] == "PAUL_ERDOS")
					adj[people[i]].push_back(people[j]);
			}
		}

		people.clear();
	}

	for(i = 0; i < testPeople.size(); i++) {
		dist = BFS(testPeople[i]);
		cout << testPeople[i] << " ";
		if(dist == -1)
			cout << "no-connection" << endl;
		else
			cout << dist << endl;
	}

	
}
