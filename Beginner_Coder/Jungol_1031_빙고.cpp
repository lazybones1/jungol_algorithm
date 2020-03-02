#include <iostream>
using namespace std;

#define N 5
#define CHECK 1
#define UNCHECK 0

bool bingo(int map[][5]);

int main() {
    int map[N][N];
    int chulsu[N][N];
    int num;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cin >> chulsu[i][j];
            map[i][j] = UNCHECK;
        }
    }
    for (int k = 0; k < N * N; ++k)
    {
        cin >> num;

        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < N; ++j)
            {
                if (num == chulsu[i][j])
                    map[i][j] = CHECK;
            }
        }

        if (bingo(map))
        {
            cout << k + 1 << endl;
            return 0;
        }
    }
    return 0;
}

bool bingo(int map[][5]) {
    int count = 0;
    bool check;

    for (int i = 0; i < N; ++i) {
        check = true;

        for (int j = 0; j < N; ++j) {
            if (map[i][j] == UNCHECK) check = false;
        }

        if (check) count++;

        check = true;
        for (int j = 0; j < N; ++j) {
            if (map[j][i] == UNCHECK) check = false;
        }
        if (check) count++;
    }

    check = true;
    for (int i = 0; i < N; ++i) {
        if (map[i][i] == UNCHECK) check = false;
    }
    if (check) count++;

    check = true;
    for (int i = 0; i < N; ++i) {
        if (map[N - i - 1][i] == UNCHECK) check = false;
    }
    if (check) count++;
    if (count >= 3) return true;
    else return false;
}
