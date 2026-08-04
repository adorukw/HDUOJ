#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B;
        cin >> A >> B;
        A = A % 100;
        B = B % 100;
        int res = A + B;
        res = res % 100;
        cout << res << endl;
    }
    return 0;
}
