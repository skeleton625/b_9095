#include <iostream>
using namespace std;

int t, i1, m, c = 3;
int n[12] = { 0, 1, 2, 4 };
int main() {
	cin >> t;
	while (t--) {
		cin >> i1;
		if (i1 > c) {
			for (int i = c+1; i <= i1; i++) {
				n[i] += n[i - 1];
				n[i] += n[i - 2];
				n[i] += n[i - 3];
				c++;
			}
		}
		cout << n[i1] << endl;
	}
}