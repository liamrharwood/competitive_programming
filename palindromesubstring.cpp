#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	string s;
	int n;

	while(cin >> s) {
		vector<string> dromes;

		n = s.length();
		bool is_drome[n][n];

		for(int i =0; i < n; i++) {
			is_drome[i][i] = true;
		}

		for(int i=0; i < n; i++) {
			if(s[i] == s[i+1]) {
				dromes.push_back(s.substr(i, 2));
				is_drome[i][i+1] = true;
			} else { is_drome[i][i+1] = false;}
		}

		for(int k=3; k <= n; k++) {
			for(int i=0; i < n-k+1; i++) {
				int j = i + k - 1;
				if(s[i] == s[j] && is_drome[i+1][j-1]) {
					dromes.push_back(s.substr(i, k));
					is_drome[i][j] = true;
				} else { is_drome[i][j] = false; }
			}
		}

		sort(dromes.begin(), dromes.end());
		dromes.erase(unique(dromes.begin(), dromes.end()), dromes.end());
		for(int i=0; i < dromes.size(); i++) {
			cout << dromes[i] << endl;
		}

		cout << endl;
	};

	return 0;
}