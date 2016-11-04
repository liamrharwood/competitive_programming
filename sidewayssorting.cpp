#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(string a, string b) {
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);
	return a < b;
}

int main() {
	int r, c, i, j;
	bool first = true;
	while(true){
		
		cin >> r >> c;
		if(r==0 && c==0) {
			break;
		}
		
		if(first) {
			first = false;
		} else {
			cout << endl;
		}

		char block[r][c];
		string words[c];
		for(i=0; i < r; i++) {
			for(j=0; j < c; j++) {
				cin >> block[i][j];
				words[j] += block[i][j];
			}
		}
		stable_sort(words, words+c, cmp);
		for(i=0; i < r; i++) {
			for(j=0; j < c; j++) {
				cout << words[j][i];
			}
			cout << endl;
		}

	}
}