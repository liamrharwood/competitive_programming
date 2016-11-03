#include <iostream>

using namespace std;

int main() {
	int T, n, tmp, bound;
	bool stop = false;
	cin >> T;

	for(int i=0; i < T; i++) {
		bound = 0;
		tmp = 1;
		cin >> n;
		while(cin >> n, n != 0) {
			if (n > tmp * 2) {
				bound += n - tmp * 2;
			}
			tmp = n;
		}
		cout << bound << endl;
	}
}