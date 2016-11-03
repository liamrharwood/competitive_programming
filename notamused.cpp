#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
	string verb;
	string person;
	int minute;

	vector<map<string,int> > days;
	map<string, int> people;

	while(cin >> verb) {
		if(verb == "ENTER") {
			cin >> person >> minute;
			people[person] += 0 - minute;
		}
		if(verb == "EXIT") {
			cin >> person >> minute;
			people[person] += minute;
		}
		if(verb == "CLOSE") {
			days.push_back(people);
			people.clear();
		}
	}

	for(int i=0; i < days.size(); i++) {
		if(i != 0) cout << endl;
		cout << "Day " << i+1 << endl;

		for(auto it=days[i].begin(); it!=days[i].end(); it++) {
			cout << it->first << " $";
			cout << setprecision(2) << fixed << it->second * 0.10;
			cout << endl;
		}

		
	}


	return 0;
}