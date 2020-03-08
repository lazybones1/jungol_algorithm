#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
    string iron;
    cin >> iron;
    int ironNum = 0;
    int answer = 0;

    for (int i = 0; i < iron.length(); i++) {
        if (iron[i] == '(') {
            if (iron[i + 1] == ')') {
                answer += ironNum;
            }
            else {
                ironNum++;
            }

        }
        else if (iron[i] == ')' && iron[i - 1] == ')') {
            ironNum--;
            answer++;
        }
    }
    cout << answer;
}
