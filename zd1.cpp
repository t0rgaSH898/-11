#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i > 1) cout << " ";
        cout << i;
    }
    cout << endl;

    return 0;
}
