#include <iostream>
#define MAX 102

using namespace std;
int all[MAX][MAX]={0};

int line(void);
int countf(int x, int y);

int main(void)
{
    int n, sum=0, x, y;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> x >> y;
        for(int j=x; j<(x+10); j++)
        {
            for(int k=y; k<(y+10); k++)
            {
                all[j][k]=1;
            }
        }
    }
    sum=line();
    cout << sum;

}

int line(void)
{
    int sum=0;

    for(int i=1; i<MAX-1; i++)
    {
        for(int j=1; j<MAX-1; j++)
        {
            if(all[i][j]==1)
                sum=sum+countf(i, j);
        }

    }

    return sum;
}

int countf(int x, int y)
{
    int cnt=0;

    if(all[x+1][y]==0) cnt++;
    if(all[x-1][y]==0) cnt++;
    if(all[x][y+1]==0) cnt++;
    if(all[x][y-1]==0) cnt++;

    return cnt;
}
