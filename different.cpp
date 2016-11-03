#include <cstdio>
#include <cmath>

using namespace std;

int main () {
	long a, b, c;

	while(scanf("%ld", &a) > 0) {
		scanf("%ld", &b);
		c = abs(a-b);
		printf("%ld\n", c);
	}
}