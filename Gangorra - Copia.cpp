/*
* P1 ∗ C1 = P2 ∗ C2
* C1 = esquerdo, C2 = direito
*/
#include <iostream>
using namespace std;

int main() {
	int p1, c1, p2, c2, esq, dir;
	float equi;
	cin >> p1 >> c1 >> p2 >> c2;
	esq = (p1 * c1); 
	dir = (p2 * c2);
	if(esq == dir) {
		cout << 0;
	} else {
		if(esq > dir) {
			cout << -1;
		} else {
			cout << 1;
		}
	}
	cout << endl;
	return 0;
}