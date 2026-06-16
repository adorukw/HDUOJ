#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 100;

vector<vector<int>> nums(MAXN + 1, vector<int>(MAXN + 1, 0));
vector<vector<int>> dp(MAXN + 1, vector<int>(MAXN + 1, 0));

int main() {
    int C;
    cin >> C;
    while (C--) {
        int N;
        cin >> N;
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= i; j++) {
                cin >> nums[i][j];
            }
        }
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= i; j++) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + nums[i][j];
            }
        }
        int res = 0;
        for (int i = 1; i <= N; i++) {
            res = max(res, dp[N][i]);
        }
        cout << res << endl;
    }
    return 0;
}