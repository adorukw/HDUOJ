#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<double> c(n + 1);
        double a0, aNPlus1;
        cin >> a0 >> aNPlus1;
        for (int i = 1; i <= n; i++) {
            cin >> c[i];
        }

        double a1 = n * a0 + aNPlus1;
        for (int i = 1; i <= n; i++) {
            a1 -= 2 * (n + 1 - i) * c[i];
        }
        a1 /= (n + 1);
        cout << fixed << setprecision(2) << a1 << endl;
    }
    return 0;
}