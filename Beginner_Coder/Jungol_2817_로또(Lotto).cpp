#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int k;
int lottoNum[6] = { 0 };
int arr[14] = { 0 };
void lotto(int index, int len);

int main() {
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> arr[i];
    }
    lotto(0, 0);
    return 0;
 }

void lotto(int index, int len) {
    if (len == 6) {
        for (int i = 0; i < 6; i++) {
            cout << lottoNum[i] <<" ";
        }
        cout << endl;
        return;
    }
    for (int i = index; i < k; i++) {
        lottoNum[len] = arr[i];
        lotto(i + 1, len + 1);
    }
}
