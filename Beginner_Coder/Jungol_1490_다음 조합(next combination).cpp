#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int arr[10] = { 0 };
int arrK[10] = { 0 };
int comp[10] = { 0 };
bool isComp = false;
bool cnt = false;
int n, k;

void nextC(int index, int len);

int main() {
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        cin>>comp[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = i+1;
    }
    nextC(0, 0);
    if (!cnt) cout << "NONE";
    return 0;
 }

void nextC(int index, int len) {
    if (len == k) {
        if (isComp) {
            for (int i = 0; i < k; i++) {
                cout << arrK[i]<<" ";
            }
            cout << endl;
            isComp = false;
            cnt = true;
            return;
        }
        else {
            for (int i = 0; i < k; i++) {
                if (arrK[i] == comp[i]) {
                    isComp = true;
                }
                else {
                    isComp = false;
                    return;
                }
            }
        }
    }
    for (int i = index; i < n; i++) {
        arrK[len] = arr[i];
        nextC(i + 1, len + 1);
    }
}
