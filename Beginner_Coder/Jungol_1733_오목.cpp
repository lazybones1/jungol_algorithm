#include <iostream>
#include <algorithm>
using namespace std;

int board[20][20];
int winner = 0;
int px = -1, py = -1;
int cnt = 4;
bool gameend = false;

void find_right(int x, int y, int color) {
    if (board[x][++y] == color) {
        cnt--;
        if (cnt == 0) {
            winner = color;
            gameend = true;
        }
        if (cnt < 0) {
            gameend = false;
        }
        find_right(x, y, color);
    }
    else cnt = 4;
}

void find_rightDiagonal(int x, int y, int color) {
    if (board[++x][++y] == color) {
        cnt--;
        if (cnt == 0) {
            winner = color;
            gameend = true;
        }
        if (cnt < 0) {
            gameend = false;
        }
        find_rightDiagonal(x, y, color);
    }
    else cnt = 4;
}
void find_leftDiagonal(int x, int y, int color) {
    if (board[--x][++y] == color) {
        cnt--;
        if (cnt == 0) {
            winner = color;
            gameend = true;
        }
        if (cnt < 0) {
            gameend = false;
        }
        find_leftDiagonal(x, y, color);
    }
    else cnt = 4;
}

void find_down(int x, int y, int color) {
    if (board[++x][y] == color) {
        cnt--;
        if (cnt == 0) {
            winner = color;
            gameend = true;
        }
        if (cnt < 0) {
            gameend = false;
        }
        find_down(x, y, color);
    }
    else cnt = 4;
}

int main()
{
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            board[i][j] = 0;
        }
    }
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            cin >> board[i][j];
        }
    }
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            if (board[i][j] == 1 || board[i][j] == 2) {
                if (board[i][j - 1] != board[i][j]) {
                    find_right(i, j, board[i][j]);
                }
                if (board[i-1][j - 1] != board[i][j]) {
                    find_rightDiagonal(i, j, board[i][j]);
                }
                if (board[i + 1][j - 1] != board[i][j]) {
                    find_leftDiagonal(i, j, board[i][j]);
                }
                if (board[i - 1][j] != board[i][j]) {
                    find_down(i, j, board[i][j]);
                }

            }
            if (gameend) {
                cout << winner << endl;
                cout << i+1 << " " << j+1;
                return 0;
            }
        }
    }
    cout << "0";
}
