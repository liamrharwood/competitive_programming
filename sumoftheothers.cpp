#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string line;
	vector<int> nums;
	int x, i, j, sum = 0;

	while(getline(cin, line)) {
		stringstream ss;
		ss << line;
		while(ss >> x) {
			nums.push_back(x);
		}

		for(i=0; i<nums.size(); i++) {
			for(j=0; j<nums.size(); j++) {
				sum += nums[j];
			}
			sum -= nums[i];
			if(sum == nums[i]) {
				cout << sum << endl;
				sum = 0;
				break;
			} else {
				sum = 0;
			}
		}
		nums.clear();

	}

}