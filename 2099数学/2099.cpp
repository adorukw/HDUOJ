#include <iostream>
#include <string>
using namespace std;

string PrintfNum(int n) {
  if (n < 10) {
    return "0" + to_string(n);
  } else {
    return to_string(n);
  }
}

int main() {
  int a, b;
  while (cin >> a >> b && a != 0 && b != 0) {
    int base = (-100 * a) % b;
    if (base < 0)
      base += b;
    string res;
    int x = base;
    while (x <= 99) {
      if (!res.empty())
        res += " ";
      res += PrintfNum(x);
      x += b;
    }
    cout << res << endl;
  }
  return 0;
}
