#include <iostream>
using namespace std;

int main() {
  int A, B;
  while (cin >> A >> B) {
    if ((A % 86 + B % 86) % 86 == 0) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }

  return 0;
}
