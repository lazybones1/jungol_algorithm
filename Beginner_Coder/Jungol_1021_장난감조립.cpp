#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

bool isPart[101] = { false };
int changes[101][101] = { 0 };
int basicPartNum[101] = { 0 };

void neednum(int x, int y, int n) {
    for (int i = 1; i < n; i++) {
        if (changes[x][i] != 0) {
            int su = changes[x][i];
            neednum(i, su * y, n);
        }
    }
    if (!isPart[x]) basicPartNum[x] += y;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y, k;
        cin >> x >> y >> k;
        changes[x][y] = k;
        isPart[x] = true;
    }
    neednum(n, 1, n);
    for (int i = 1; i < n; i++) {
        if (basicPartNum[i] != 0) cout << i << " " << basicPartNum[i] << endl;
    }
 }
