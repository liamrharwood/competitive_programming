#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n, i;
    string name, food, line;
    map<string, vector<string> > day;
    stringstream ss;
    while(true) {
        cin >> n;
        if(n == 0)
            break;

        
        for(i=0; i<n+1; i++) {
            getline(cin, line);
            ss.str("");
            ss.clear();
            ss << line;
            ss >> name;
            while(ss >> food) {
                day[food].push_back(name);
            }
        }

        for(auto fud : day) {
            cout << fud.first <<  " ";

            for(i=0; i<fud.second.size(); i++) {
                cout << fud.second[i] << " ";
            }
            day.clear();
            cout << endl;
        }

        cout << endl;
    }
}