#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

struct op {
	bool operator()(const pair<string, int>left, const pair<string, int> right) {
		return left.first < right.first;
	}
};

int main() {
	string str;
	while (true) {
		vector<pair<string, int>> words;
		getline(cin, str);
		if (str == "END") break;
		stringstream ss(str);
		string buffer;
		while (ss >> buffer) {
			bool isMatch = true;
			for (vector<pair<string, int>>::iterator it = words.begin(); it != words.end(); ++it) {
				if (it->first == buffer) {
					isMatch = false;
					it->second++;
				}
			}
			if (isMatch) words.push_back(pair<string, int>(buffer, 1));
		}
		sort(words.begin(), words.end(), op());
		for (vector<pair<string, int>>::iterator it = words.begin(); it != words.end(); ++it) {
			cout << it->first << " : " << it->second << endl;
		}

	}
	return 0;
}
