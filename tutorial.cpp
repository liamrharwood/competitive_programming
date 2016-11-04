#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int t;
    long unsigned int m, n, ops;
    
    cin >> m >> n >> t;
    switch(t) {
        case 1:
            ops = 1;
            for(; n > 0; n--) {
                ops *= n;
                if(ops > m) {
                    cout << "TLE" << endl;
                    break;
                }
            }
            if(ops <= m) {
                cout << "AC" << endl;
            }
            break;
        case 2:
            if(pow(2, n) <= m) {
                cout << "AC" << endl;
            } else {
                cout << "TLE" << endl;
            }
            break;
        case 3:
            if(pow(n, 4) <= m) {
                cout << "AC" << endl;
            } else {
                cout << "TLE" << endl;
            }
            break;
        case 4:
            if(pow(n, 3) <= m) {
                cout << "AC" << endl;
            } else {
                cout << "TLE" << endl;
            }
            break;
        case 5:
            if(pow(n, 2) <= m) {
                cout << "AC" << endl;
            } else {
                cout << "TLE" << endl;
            }
            break;
        case 6:
            if(log2(n) * n <= m) {
                cout << "AC" << endl;
            } else {
                cout << "TLE" << endl;
            }
            break;
        case 7:
            if(n <= m) {
                cout << "AC" << endl;
            } else {
                cout << "TLE" << endl;
            }
            break;
    }
}