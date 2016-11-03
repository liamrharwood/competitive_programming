#include <iostream>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

int main() {
	set<string> sset;
	string s;
	string slow;
	bool flag = true;

	while(cin >> s) {
		if(flag)
			flag = false;
		else
			cout << " ";
		slow = s;
		transform(slow.begin(), slow.end(), slow.begin(), ::tolower);
		if(sset.count(slow) == 0) {
			cout << s;
			sset.insert(slow);
		} else {
			cout << ".";
		}
	}

	cout << endl;
	return 0;
}