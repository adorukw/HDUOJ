#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;

        vector<int> bricks(n);
        int total = 0;
        for (int i = 0; i < n; i++) {
            cin >> bricks[i];
            total += bricks[i];
        }
        int avg = total / n;

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (bricks[i] > avg) {
                count += bricks[i] - avg;
            }
        }

        cout << count << endl;
    }
    return 0;
}