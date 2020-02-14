#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char c[5][15] = { 0 };
    int cnt = 0;
    int max = 0;
    for (int i = 0; i < 5; i++) {
        cin >> c[i];
        if (strlen(c[i]) > max) max = strlen(c[i]);
    }
    for (int j = 0; j < max; j++) {
        for (int i = 0; i < 5; i++) {
            if (c[i][j] != NULL) {
                cout << c[i][j];
            }
        }
    }
}
