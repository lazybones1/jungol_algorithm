#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int arr[100] = { -1 };
int n, p;

void cycle(int index, int len);

int main() {
    cin >> n >> p;
    cycle(n, 0);
    return 0;
 }

void cycle(int mul, int len) {
    int tmp = (mul * n) % p;
    bool isvisit = false;
    for (int i = 0; i <= len; i++) {
        if (tmp == arr[i]) {
           isvisit = true;
           break;
        }
    }
    if (isvisit) {
        cout << len;
        return;
    }
    else {
        arr[len] = tmp;
        cycle(tmp, len + 1);
    }
}
