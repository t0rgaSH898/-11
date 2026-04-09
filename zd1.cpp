#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    int i;
    cin >> n;

    for(i = 1; i <= n; i++)
    { 
        cout << i << " ";
    }
    return 0;
}
