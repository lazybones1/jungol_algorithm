#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    char color[5];
    int number[5];
    int color_same = 0;
    int number_continuity = 0;
    int number_same[5][2];
    int answer = 0;

    for (int i = 0; i < 5; i++) {
        cin >> color[i] >> number[i];
    }
    sort(color, color + 5);
    sort(number, number + 5);

    for (int i = 0; i < 4; i++) {
        if (color[i] == color[i + 1]) {
            color_same = 1;
        }
        else {
            color_same = 0;
            break;
        }
    }

    for (int i = 0; i < 4; i++) {
        if (number[i]+1 == number[i + 1] ) {
            number_continuity = 1;
        }
        else {
            number_continuity = 0;
            break;
        }
    }

    for (int i = 0; i < 5; i++) {
        number_same[i][0] = number[1];
        number_same[i][1] = 1;
    }
    int k = 0;
    for (int i = 1; i < 5; i++) {
        if (number[i] == number[i - 1]) {
            number_same[k][0] = number[i];
            number_same[k][1]++;
        }
        else {
            if (number_same[k][1] != 1) k++;
        }
    }
    if (number_same[0][1] < number_same[1][1]) {
        int tmp1 = number_same[0][0];
        int tmp2 = number_same[0][1];
        number_same[0][0] = number_same[1][0];
        number_same[0][1] = number_same[1][1];
        number_same[1][0] = tmp1;
        number_same[1][1] = tmp2;
    }
    else if (number_same[0][1] == number_same[1][1]) {
        if (number_same[0][0] < number_same[1][0]) {
            int tmp1 = number_same[0][0];
            number_same[0][0] = number_same[1][0];
            number_same[1][0] = tmp1;
        }
    }

    if (color_same == 1 && number_continuity == 1) {
        answer = number[4] + 900;
    }
    else if (number_same[0][1] == 4) {
        answer = number_same[0][0] + 800;
    }
    else if (number_same[0][1] == 3 && number_same[1][1] == 2) {
        answer = (number_same[0][0] * 10) + number_same[1][0] + 700;
    }
    else if (color_same == 1) {
        answer = number[4] + 600;
    }
    else if (number_continuity == 1) {
        answer = number[4] + 500;
    }
    else if(number_same[0][1] == 3) {
        answer = number_same[0][0] + 400;
    }
    else if (number_same[0][1] == 2 && number_same[1][1] == 2) {
        answer = (number_same[0][0] * 10) + number_same[1][0] + 300;
    }
    else if (number_same[0][1] == 2) {
        answer = number_same[0][0] + 200;
    }
    else {
        answer = number[4] + 100;
    }

    cout << answer;
}
