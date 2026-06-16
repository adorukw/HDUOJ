#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 33;

vector<long long> dpH(MAXN + 1, 0);
vector<long long> dpL(MAXN + 1, 0);

int main() {
    dpH[0] = 1;
    for (int i = 1; i <= MAXN; i++) {
        dpH[i] = dpH[i - 1] * 3 + dpL[i - 1] * 2;
        dpL[i] = dpH[i - 1] * 1 + dpL[i - 1] * 1;
    }
    int n;
    while (cin >> n) {
        if (n == -1) break;
        cout << dpH[n] << ", " << dpL[n] << endl;
    }
    return 0;
}