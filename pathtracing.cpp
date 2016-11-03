#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<string> moves;

// amt of space
int belowamt = 0;
int aboveamt = 0;
int rightamt = 0;
int leftamt = 0;

int y = 0;
int x = 0;
int i, j;

int stringnum;

void constructMap() {
	int height = aboveamt+belowamt+3;
	int width = rightamt+leftamt+3;
	char map_mat[height][width];
	for(i=0; i < height; i++) {
		for (j=0; j < width; j++) {
			if(i == 0 || i == height-1 || j==0 || j == width-1) {
				map_mat[i][j] = '#';
			} else {
				map_mat[i][j] = ' ';
			}
		}
	}
	
	x = leftamt + 1;
	y = aboveamt + 1;
	map_mat[y][x] = 'S';

	for(i=0; i < moves.size(); i++) {
		if(moves[i] == "down") y++;
		if(moves[i] == "up") y--;
		if(moves[i] == "left") x--;
		if(moves[i] == "right")	x++;
		
		if(i == moves.size() - 1){
			map_mat[y][x] = 'E';
		} else {
			if(map_mat[y][x] != 'S') map_mat[y][x] = '*';
		}
	}

	for(i=0; i < height; i++) {
		for (j=0; j < width; j++) {
			cout << map_mat[i][j];
		}
		cout << endl;
	} 
}

void calcDims(string s) {
	if (s=="down") stringnum = 1;
	if (s=="up") stringnum = 2;
	if (s=="right") stringnum = 3;
	if (s=="left") stringnum = 4;


	switch (stringnum) {
		case 1:
			y--;
			if(y < 0 && abs(y) > belowamt) belowamt++;
			break;
		case 2:
			y++;
			if(y > 0 && abs(y) > aboveamt) aboveamt++;
			break;
		case 3:
			x++;
			if(x > 0 && abs(x) > rightamt) rightamt++;
			break;
		case 4:
			x--;
			if(x < 0 && abs(x) > leftamt) leftamt++;
			break;
	}
	
}

int main() {
	string s;
	while(cin >> s) {
		moves.push_back(s);
		calcDims(s);
	}

	constructMap();
}
