#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

bool cmp(pair<string, string> a, pair<string, string> b) {
	if(a.second < b.second || (a.second == b.second && a.first < b.first)) {
		return true;
	}
}

int main() {
	vector<pair<string, string> > names;
	string fn, ln;
	int i, j;

	while(cin >> fn) {
		cin >> ln;
		names.push_back(make_pair(fn, ln));
	}

	sort(names.begin(), names.end(), cmp);
	for(i=0; i<names.size(); i++) {
		for(j=0; j<names.size(); j++) {
			if(i != j && names[i].first == names[j].first) {
				cout << names[i].first << " " << names[i].second << endl;
				break;
			} else if(j >= names.size()-1) {
				cout << names[i].first << endl;
			}
		}
	}
}