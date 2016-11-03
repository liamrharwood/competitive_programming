#include <cmath>
#include <cstdio>

using namespace std;


int main() {
	int p, i, sum;

	while(scanf("%d", &p) > 0) {
		sum = 0;

		for(i = 1; i <= sqrt(p); i++) {
			if(p % i == 0) {
				if(p/i == i) {
					sum += i;
				} else if(i != 1){
					sum += i + p/i;
				} else {
					sum += i;
				}
			}
		}

		if(sum == p)
			printf("%d perfect\n", p);
		else if(abs(sum - p) <= 2)
			printf("%d almost perfect\n", p);
		else
			printf("%d not perfect\n", p);
	}



	return 0;
}