#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    int i;
    int a = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        a += i;
}
    cout << a << endl;
    
    return 0;
}
