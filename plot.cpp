#include <iostream>

using namespace std;


int main() {
	int n, i, j;
	cin >> n;
	int t[n+1];
	for(i = n; i >= 0; i--) {
		cin >> t[i];
	}
	n = n + 1;
	int p[n];
	p[0] = t[0];
	for(i = 1; i < n-1; i++) {
		p[i] = p[i-1] + t[1];
		for(j = 2; j < n; j++) {
			t[j-1] = t[j-1] + t[j];
		}
	}
	for(i=0; i < n; i++) {
		if(i != 0) cout << " ";
		cout << t[i];
	}
	cout << endl;

}