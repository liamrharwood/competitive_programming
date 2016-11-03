#include <iostream>

using namespace std;

int main () {

	int w, l, n, i, mag, tx, ty, ax, ay;
	char dir;

	while(true) {
		cin >> w >> l;
		if(w == 0 && l == 0)
			break;
		cin >> n;
		tx = ty = ax = ay = 0;
		for(i=0; i<n; i++){
			cin >> dir >> mag;

			if(dir == 'u'){
				ty += mag;
				if(ay + mag > l-1) {
					ay = l-1;
				} else {
					ay += mag;
				}
			} else if(dir == 'd') {
				ty -= mag;
				if(ay - mag < 0) {
					ay = 0;
				} else {
					ay -= mag;
				}
			} else if(dir == 'l') {
				tx -= mag;
				if(ax - mag < 0) {
					ax = 0;
				} else {
					ax -= mag;
				}
			} else if(dir == 'r') {
				tx += mag;
				if(ax + mag > w-1) {
					ax = w-1;
				} else {
					ax += mag;
				}
			}

		}

		cout << "Robot thinks " << tx << " " << ty << endl;
		cout << "Actually at " << ax << " " << ay << endl << endl;


	}
}