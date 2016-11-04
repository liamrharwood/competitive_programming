#include <iostream>
#include <string>

using namespace std;

int main() {
	string jon, doctor;

	cin >> jon >> doctor;

	if(jon.length() < doctor.length()) {
		cout << "no" << endl;
	} else {
		cout << "go" << endl;
	}
}