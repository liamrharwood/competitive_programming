#include <cstdio>
#include <vector>

int main() {
	int h, w, i, j;

	while(true) {
		scanf("%d %d", &h, &w);

		if(h == 0 && w == 0) {
			break;
		}
		
		int grid[h][w];
		int memo[];

		for(i=0; i<h; i++) {
			for(j=0; j<w; j++){
				scanf("%1d", &grid[i][j]);
			}
		}





	}

	return 0;
}