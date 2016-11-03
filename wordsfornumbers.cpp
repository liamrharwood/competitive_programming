#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main () {
	string token, line;
	int x, y;
	string::size_type sz;
	bool flag;
	while(getline(cin, line)) {
		flag = true;
		stringstream ss;
		ss << line;
		while(ss >> token) {
			if(token.find_first_not_of("0123456789") != string::npos) {
				cout << token << " ";
			} else {
				if(token.length() == 2) {
					x = stoi(token.substr(0,1), &sz);
					switch(x) {
						case 1:
							y = stoi(token.substr(1,1), &sz);
							switch(y) {
								case 0:
		  							if(flag) 
										cout << "Ten" << " ";
									else
										cout << "ten" << " ";
									break;
								case 1:
									if(flag) 
										cout << "Eleven" << " ";
									else
										cout << "eleven" << " ";
									break;
						  		case 2:
									if(flag) 
										cout << "Twelve" << " ";
									else
										cout << "twelve" << " ";
									break;
								case 3:
									if(flag) 
										cout << "Thirteen" << " ";
									else
										cout << "thirteen" << " ";
									break;
								case 4:
									if(flag) 
										cout << "Fourteen" << " ";
									else
										cout << "fourteen" << " ";
									break;
								case 5:
									if(flag) 
										cout << "Fifteen" << " ";
									else
										cout << "fifteen" << " ";
									break;
								case 6:
									if(flag) 
										cout << "Sixteen" << " ";
									else
										cout << "sixteen" << " ";
									break;
								case 7:
									if(flag) 
										cout << "Seventeen" << " ";
									else
										cout << "seventeen" << " ";
									break;
								case 8:
									if(flag) 
										cout << "Eighteen" << " ";
									else
										cout << "eighteen" << " ";
									break;
								case 9:
									if(flag) 
										cout << "Nineteen" << " ";
									else
										cout << "nineteen" << " ";
									break;
							}
							break;
						case 2:
							if(flag)
								cout << "Twenty";
							else
								cout << "twenty";
							break;
						case 3:
							if(flag)
								cout << "Thirty";
							else
								cout << "thirty";
							break;
						case 4:
							if(flag)
								cout << "Forty";
							else
								cout << "forty";
							break;
						case 5:
							if(flag)
								cout << "Fifty";
							else
								cout << "fifty";
							break;
						case 6:
							if(flag)
								cout << "Sixty";
							else
								cout << "sixty";
							break;
						case 7:
							if(flag)
								cout << "Seventy";
							else
								cout << "Seventy";
							break;
						case 8:
							if(flag)
								cout << "Eighty";
							else
								cout << "eighty";
							break;
						case 9:
							if(flag)
								cout << "Ninety";
							else
								cout << "ninety";
							break;

					}
					if(x != 1) {
						y = stoi(token.substr(1,1), &sz);
						switch(y) {
							case 0:
								cout << " ";
								break;
							case 1:
								cout << "-one" << " ";
								break;
							case 2:
								cout << "-two" << " ";
								break;
							case 3:
								cout << "-three" << " ";
								break;
							case 4:
								cout << "-four" << " ";
								break;
							case 5:
								cout << "-five" << " ";
								break;
							case 6:
								cout << "-six" << " ";
								break;
							case 7:
								cout << "-seven" << " ";
								break;
							case 8:
								cout << "-eight" << " ";
								break;
							case 9:
								cout << "-nine" << " ";
								break;
						}
					}
				} else if(token.length() == 1) {
					y = stoi(token.substr(0,1), &sz);
						switch(y) {
							case 0:
								if(flag)
									cout << "Zero" << " ";
								else
									cout << "zero" << " ";
								break;
							case 1:
								if(flag)
									cout << "One" << " ";
								else
									cout << "one" << " ";
								break;
							case 2:
								if(flag)
									cout << "Two" << " ";
								else
									cout << "two" << " ";
								break;
							case 3:
								if(flag)
									cout << "Three" << " ";
								else
									cout << "three" << " ";
								break;
							case 4:
								if(flag)
									cout << "Four" << " ";
								else
									cout << "four" << " ";
								break;
							case 5:
								if(flag)
									cout << "Five" << " ";
								else
									cout << "five" << " ";
								break;
							case 6:
								if(flag)
									cout << "Six" << " ";
								else
									cout << "six" << " ";
								break;
							case 7:
								if(flag)
									cout << "Seven" << " ";
								else
									cout << "seven" << " ";
								break;
							case 8:
								if(flag)
									cout << "Eight" << " ";
								else
									cout << "eight" << " ";
								break;
							case 9:
								if(flag)
									cout << "Nine" << " ";
								else
									cout << "nine" << " ";
								break;
							}

				}
			}
			if(flag)
				flag = false;
		}
		cout << endl;
	}
}