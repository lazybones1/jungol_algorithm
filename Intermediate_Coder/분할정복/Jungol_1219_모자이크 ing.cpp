#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int find(vector<int> miss, int size) {
	int cover = -1;
	int paper = 0;
	for (int pos = 0; pos < miss.size(); pos++) {
		if (cover == -1) {
			cover = miss[pos];
			paper++;
		}
		else if (cover + size <= miss[pos]) {
			cover = miss[pos];
			paper++;
		}
	}
	return paper;
}

int main() {
	int row, col, pnum, missnum;
	cin >> row >> col >> pnum >> missnum;
	vector<int> miss;
	int min_size = 0;
	for (int i = 0; i < missnum; i++) {
		int x, y;
		cin >> x >> y;
		min_size = max(min_size, x);
		miss.push_back(y);
	}
	sort(miss.begin(), miss.end());
	int start = min_size, end = 1000000;
	while (start <= end) {
		int middle = (start + end) / 2;
		if (find(miss, middle) <= pnum) {
			end = middle - 1;
		}
		else {
			start = middle + 1;
		}
	}
	cout<<start;
	return 0;
}
