#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string a, string b) {
	return a.substr(0,2) < b.substr(0,2);
}

int main() {
	int n, i;
	string s;
	bool flag = true;

	while(cin >> n, n != 0) {
		if(!flag) {
			cout << endl;
		} else {
			flag = false;
		}

		vector<string> names;
		for(i=0; i < n; i++) {
			cin >> s;
			names.push_back(s);
		}
		stable_sort(names.begin(), names.end(), cmp);
		for(i=0; i<n; i++) {
			cout << names[i] << endl;
		}
	}
}