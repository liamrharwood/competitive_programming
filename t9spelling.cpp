#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void typeLetter(char letter, char prev) {
    switch(letter) {
        case 'a':
            if(prev == 'a' || prev == 'b' || prev == 'c')
                cout << " ";
            cout << "2";
            break;
        case 'b':
            if(prev == 'a' || prev == 'b' || prev == 'c')
                cout << " ";
            cout << "22";
            break;
        case 'c':
            if(prev == 'a' || prev == 'b' || prev == 'c')
                cout << " ";
            cout << "222";
            break;
        case 'd':
            if(prev == 'd' || prev == 'e' || prev == 'f')
                cout << " ";
            cout << "3";
            break;
        case 'e':
            if(prev == 'd' || prev == 'e' || prev == 'f')
                cout << " ";
            cout << "33";
            break;
        case 'f':
            if(prev == 'd' || prev == 'e' || prev == 'f')
                cout << " ";
            cout << "333";
            break;
        case 'g':
            if(prev == 'g' || prev == 'h' || prev == 'i')
                cout << " ";
            cout << "4";
            break;
        case 'h':
            if(prev == 'g' || prev == 'h' || prev == 'i')
                cout << " ";
            cout << "44";
            break;
        case 'i':
            if(prev == 'g' || prev == 'h' || prev == 'i')
                cout << " ";
            cout << "444";
            break;
        case 'j':
            if(prev == 'j' || prev == 'k' || prev == 'l')
                cout << " ";
            cout << "5";
            break;
        case 'k':
            if(prev == 'j' || prev == 'k' || prev == 'l')
                cout << " ";
            cout << "55";
            break;
        case 'l':
            if(prev == 'j' || prev == 'k' || prev == 'l')
                cout << " ";
            cout << "555";
            break;
        case 'm':
            if(prev == 'm' || prev == 'n' || prev == 'o')
                cout << " ";
            cout << "6";
            break;
        case 'n':
            if(prev == 'm' || prev == 'n' || prev == 'o')
                cout << " ";
            cout << "66";
            break;
        case 'o':
            if(prev == 'm' || prev == 'n' || prev == 'o')
                cout << " ";
            cout << "666";
            break;
        case 'p':
            if(prev == 'p' || prev == 'q' || prev == 'r' || prev == 's')
                cout << " ";
            cout << "7";
            break;
        case 'q':
            if(prev == 'p' || prev == 'q' || prev == 'r' || prev == 's')
                cout << " ";
            cout << "77";
            break;
        case 'r':
            if(prev == 'p' || prev == 'q' || prev == 'r' || prev == 's')
                cout << " ";
            cout << "777";
            break;
        case 's':
            if(prev == 'p' || prev == 'q' || prev == 'r' || prev == 's')
                cout << " ";
            cout << "7777";
            break;
        case 't':
            if(prev == 't' || prev == 'u' || prev == 'v')
                cout << " ";
            cout << "8";
            break;
        case 'u':
            if(prev == 't' || prev == 'u' || prev == 'v')
                cout << " ";
            cout << "88";
            break;
        case 'v':
            if(prev == 't' || prev == 'u' || prev == 'v')
                cout << " ";
            cout << "888";
            break;
        case 'w':
            if(prev == 'w' || prev == 'x' || prev == 'y' || prev == 'z')
                cout << " ";
            cout << "9";
            break;
        case 'x':
            if(prev == 'w' || prev == 'x' || prev == 'y' || prev == 'z')
                cout << " ";
            cout << "99";
            break;
        case 'y':
            if(prev == 'w' || prev == 'x' || prev == 'y' || prev == 'z')
                cout << " ";
            cout << "999";
            break;
        case 'z':
            if(prev == 'w' || prev == 'x' || prev == 'y' || prev == 'z')
                cout << " ";
            cout << "9999";
            break;
        case ' ':
            if(prev == ' ')
                cout << " ";
            cout << "0";
            break;

    }
}

int main()
{
  int n, i, j;
  string word;
  stringstream ss;
  char prev;
  getline(cin, word);
  ss << word;
  ss >> n;
  
  for(i=1; i <= n; i++) {
      prev = '!';
  	cout << "Case #" << i << ": ";
  	getline(cin, word);
  	for(j=0; j < word.length(); j++) {
  	    typeLetter(word[j], prev);
  	    prev = word[j];
  	}
    cout << endl;
  }
}
