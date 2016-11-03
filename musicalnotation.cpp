#include <iostream>
#include <string>

using namespace std;

string G = "G: ";
string F = "F: ";
string E = "E: ";
string D = "D: ";
string C = "C: ";
string B = "B: ";
string A = "A: ";
string g = "g: ";
string f = "f: ";
string e = "e: ";
string d = "d: ";
string c = "c: ";
string b = "b: ";
string a = "a: ";

void addColumn() {
  G += " ";
  F += "-";
  E += " ";
  D += "-";
  C += " ";
  B += "-";
  A += " ";
  g += "-";
  f += " ";
  e += "-";
  d += " ";
  c += " ";
  b += " ";
  a += "-";
}

void addNote(char note) {
  switch (note) {
    case 'A': A.replace(A.length()-1, 1, "*"); break;
    case 'B': B.replace(B.length()-1, 1, "*"); break;
    case 'C': C.replace(C.length()-1, 1, "*"); break;
    case 'D': D.replace(D.length()-1, 1, "*"); break;
    case 'E': E.replace(E.length()-1, 1, "*"); break;
    case 'F': F.replace(F.length()-1, 1, "*"); break;
    case 'G': G.replace(G.length()-1, 1, "*"); break;
    case 'a': a.replace(a.length()-1, 1, "*"); break;
    case 'b': b.replace(b.length()-1, 1, "*"); break;
    case 'c': c.replace(c.length()-1, 1, "*"); break;
    case 'd': d.replace(d.length()-1, 1, "*"); break;
    case 'e': e.replace(e.length()-1, 1, "*"); break;
    case 'f': f.replace(f.length()-1, 1, "*"); break;
    case 'g': g.replace(g.length()-1, 1, "*"); break;
    default: break;
  }
}

int main() {
	int n;
	cin >> n;
	
	string s;
	string::size_type size;
	for(int i=0; i < n; i++) {
		cin >> s;
		if(i != 0) {
			addColumn();
		}
		char note = s[0];
		long length;
		if(s.length() > 1) {
			length = stol(s.substr(1,s.length()-1), &size);
		} else {
			length = 1;
		}
		for(long j=0; j<length; j++) {
			addColumn();
			addNote(note);
		}
	}

	cout << G << endl;
	cout << F << endl;
	cout << E << endl;
	cout << D << endl;
	cout << C << endl;
	cout << B << endl;
	cout << A << endl;
	cout << g << endl;
	cout << f << endl;
	cout << e << endl;
	cout << d << endl;
	cout << c << endl;
	cout << b << endl;
	cout << a << endl;

	return 0;
}