#include <iostream>
#include < string>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t > 0) {
		string s;
		cin >> s;
		char p[100000];
		int tp = -1;
		for (int i = 0; i < s.length(); i++) {
			if (tp >= 0 && p[tp] == s[i]) {
				tp--;
			}
			else {
				tp++;p[tp] = s[i];
			}
		}
		if (tp == -1) { cout << "SIM" << endl; }
		else { cout << "NAO" << endl; }
		t--;
	}

	return 0;
}