#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    double weight;
    double money;
    double totalMoney = 0;
    while (cin >> name >> weight >> money) {
        totalMoney += weight * money;
    }
    totalMoney = round(totalMoney * 10.0) / 10.0;
    cout << fixed << setprecision(1) << totalMoney << endl;
    return 0;
}