#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int sum = 0;
    int x;

    while (cin >> x && x != 0) {
        sum += x;
    }

    cout << sum << endl;

    return 0;
}
