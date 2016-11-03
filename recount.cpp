#include <iostream>
#include <string>
#include <map>

using namespace std;

int main () {
	string name;
	map<string, int> votes;
	bool runoff = false;

	while(true) {
		getline(cin, name);
		if(name == "***")
			break;
		votes[name] += 1;
	}

	int maxcount = 0;
	for(auto it = votes.begin(); it != votes.end(); it++) {
		if(it->second == maxcount) {
			runoff = true;
		} else if(it->second > maxcount) {
			runoff = false;
			name = it->first;
			maxcount = it->second;
		}
	}

	if(runoff){
		cout << "Runoff!";
	} else {
		cout << name;
	}


}