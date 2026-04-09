#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    if (n == 0) {

        cout << 0 << endl;
    } else {
        int count = 0;
        int temp = abs(n);
        while (temp > 0) {
            temp /= 10;
            count++;
        }
        cout << count << endl;
    }

    return 0;
}
