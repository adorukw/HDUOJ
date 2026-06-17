#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    while (cin >> s) {
        if (s == "#") break;
        cin >> t;
        int count = 0;
        int n = s.size(), m = t.size();
        for (int i = 0; i <= n - m;) {
            bool could = true;
            for (int j = 0; j < m; j++) {
                if (s[i + j] != t[j]) {
                    could = false;
                    break;
                }
            }
            if (could) {
                count++;
                i += m;
            }
            else {
                i++;
            }
        }
        cout << count << endl;
    }
    return 0;
}