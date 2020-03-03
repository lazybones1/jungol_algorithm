#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int k;
    cin >> k;
    int direction[6][2];
    int sum = 0;
    int width = 0, height = 0;
    int answer = 0;
    for (int i = 0; i < 6; i++) {
        cin >> direction[i][0] >> direction[i][1];
        if (direction[i][0] == 1 || direction[i][0] == 2) {
            if (width < direction[i][1]) width = direction[i][1];
        }
        else if (direction[i][0] == 3 || direction[i][0] == 4) {
            if (height < direction[i][1]) height = direction[i][1];
        }
    }
    for (int i = 0; i < 6; i++) {
        if (i == 5) {
            sum += direction[i][1] * direction[0][1];
        }
        else {
            sum += direction[i][1] * direction[i + 1][1];
        }
    }
    answer = (sum - 2*(width*height))*k;
    cout << answer;

}
