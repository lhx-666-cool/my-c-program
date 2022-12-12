#include <iostream>
using namespace std;

int m, n;
long long arr[25][25] = { 0 };
void dp()
{
    if (arr[0][0] == -1) return;       //马食位置
    arr[0][0] = 1;
    for (int i = 0;i <= m;i++) for (int j = 0;j <= n;j++)     //DP
        if (arr[i][j] != -1)
        {
            if (i && arr[i - 1][j] != -1) arr[i][j] += arr[i - 1][j];
            if (j && arr[i][j - 1] != -1) arr[i][j] += arr[i][j - 1];
        }
}
int main()
{
    // m,n为目的坐标 a,b为马的位置
    int a, b;
    cin >> m >> n >> a >> b;

    arr[a][b] = -1;
    arr[a + 1][b + 2] = -1;
    arr[a][b] = -1;
    if (a - 1 >= 0) arr[a - 1][b + 2] = -1;
    arr[a + 2][b + 1] = -1;
    if (a - 2 >= 0) arr[a - 2][b + 1] = -1;
    if (b - 1 >= 0) arr[a + 2][b - 1] = -1;
    if (a - 2 >= 0 && b - 1 >= 0) arr[a - 2][b - 1] = -1;
    if (b - 2 >= 0) arr[a + 1][b - 2] = -1;
    if (a - 1 >= 0 && b - 2 >= 0)arr[a - 1][b - 2] = -1;

    dp();
    cout << arr[m][n] << endl;
}
