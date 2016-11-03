#include <iostream>
#include <sstream>
#include <set>
#include <string>
#include <tuple>

using namespace std;

set<string> domain;
set<string> codomain;
set<pair<string, string> > mappings;

bool notAFunction () {
	if(mappings)
}

bool injective () {

}

bool surjective () {

}

int main() {

	string line, token, d, c;
	int n, i;

	while(getline(cin, line)) {
		stringstream ss;
		ss << line;
		ss >> token;
		while(ss >> token) {
			domain.insert(token);
		}
		getline(cin, line);
		stringstream st;
		st << line;
		ss >> token;
		while(ss >> token) {
			codomain.insert(token);
		}
		cin >> n;
		for(i = 0; i < n; i++) {
			cin >> d >> token >> c;
			mappings.insert(make_pair(d, c));
		}

	}



	return 0;
}
