#include <iostream>

using namespace std;

int main() {
    char c;
    int n;
    bool first = true;
    while (cin >> c) {
        if (c == '@') break;
        if (!first) cout << endl;
        first = false;
        cin >> n;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                cout << ' ';
            }
            cout << c;
            int width = 2 * (i-1) + 1;
            for (int j = 0; j < width; j++) {
                cout << ' ';
            }
            if (i != 0) cout << c;
            cout << endl;
        }
        for (int i = 0; i < 2 * n - 1; i++) {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}