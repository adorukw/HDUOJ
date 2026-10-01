#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 10000;
vector<bool> isPrime(MAXN + 1, true);

void Sieve() {

  isPrime[0] = isPrime[1] = false;

  for (int i = 2; i <= MAXN; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= MAXN; j += i) {
        isPrime[j] = false;
      }
    }
  }
}

int main() {
  Sieve();

  int n;
  while (cin >> n && n != 0) {
    int count = 0;
    for (int i = 2; i <= n / 2; i++) {
      int j = n - i;
      if (isPrime[i] && isPrime[j] && i != j) {
        count++;
      }
    }
    cout << count << endl;
  }
  return 0;
}
