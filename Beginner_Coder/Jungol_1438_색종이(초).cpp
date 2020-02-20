#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	bool paper[100][100];
	int x, y;
	int area = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			paper[i][j] = false;
		}
	}
	for (int i = 0; i < num; i++) {
		cin >> x >> y;
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				if (paper[x + j][y + k] == false) {
					paper[x + j][y + k] = true;
					area++;
				}
				else continue;
			}
		}
	}
	cout << area;
}
