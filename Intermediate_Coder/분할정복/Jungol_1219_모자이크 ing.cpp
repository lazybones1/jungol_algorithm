#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int x_size, y_size, p_num, miss_num;
	cin >> x_size >> y_size >> p_num >> miss_num;
	vector<pair<int, int>> miss;
	int max_x, max_y;

	for (int i = 0; i < miss_num; i++) {
		int x, y;
		cin >> x >> y;
		max_x = max(max_x, x);
		max_y = max(max_y, y);
		miss.push_back(make_pair(x, y));
	}

	int start = min(max_x, max_y);
	int end = max(max_x, max_y);
	int answer = 0;
	bool ispass = false;


	while (start<=end) {
		int cover = 0;
		int middle = (start + end) / 2;
		int paper = p_num;
		if (max_x >= max_y) {
			int tmp = (ispass) ? 1 : 2;
			for (int i = 0; i < miss.size(); i++) {
				if (miss[i].first > cover && paper !=0) {
					cover = miss[i].first + middle-1;
					paper--;
				}
				if (cover >= max_x) {
					ispass = true;
					answer = middle;
					end = middle - 1;
					break;
				}
				if (i == miss.size() - 1) {
					ispass = false;
					start = middle + 1;
				}
			}
			if (tmp == 1 && !ispass) {
				break;
			}
		}
		else if (max_x < max_y) {
			int tmp = (ispass) ? 1 : 2;
			for (int i = 0; i < miss.size(); i++) {
				if (miss[i].second > cover && paper != 0) {
					cover = miss[i].second + middle -1;
					paper--;
				}
				if (cover >= max_y) {
					ispass = true;
					answer = middle;
					end = middle - 1;
					break;
				}
				if (i == miss.size() - 1) {
					ispass = false;
					start = middle + 1;
				}
			}
			if (tmp == 1 && !ispass) {
				break;
			}
		}
	}
	cout << answer;
}
