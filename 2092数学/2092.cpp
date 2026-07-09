#include <cmath>
#include <iostream>

using namespace std;

double eps = 1e-10;

int main() {
    int n, m;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;
        long long delta = 1LL * n * n - 4LL * m;
        if (delta < 0) {
            cout << "No" << endl;
            continue;
        }
        long long s = sqrt(delta);
        if (s * s != delta) {
            cout << "No" << endl;
            continue;
        }
        if ((n + s) % 2 == 0) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}