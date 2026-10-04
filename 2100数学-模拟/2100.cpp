#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string A, B;
  while (cin >> A >> B) {
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    string sum;
    int carry = 0;
    int n = max(A.size(), B.size());

    for (int i = 0; i < n; i++) {
      int a = i < (int)A.size() ? A[i] - 'A' : 0;
      int b = i < (int)B.size() ? B[i] - 'A' : 0;
      int s = a + b + carry;
      sum += (s % 26) + 'A';
      carry = s / 26;
    }
    if (carry)
      sum += carry + 'A';

    reverse(sum.begin(), sum.end());

    int pos = 0;
    while (pos + 1 < (int)sum.size() && sum[pos] == 'A')
      pos++;
    cout << sum.substr(pos) << endl;
  }
  return 0;
}
