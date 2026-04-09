#include <iostream>
using namespace std;

int main() {
    int N;
    bool isPrime = true;
    
    cin >> N;
    
    if (N < 2) {
        isPrime = false;
    }
    
    for (int i = 2; i < N; i++) {
        if (N % i == 0) {
            isPrime = false;
            break;
        }
    }
    
    if (isPrime) {
        cout << "Простое" << endl;
    } else {
        cout << "Не простое" << endl;
    }
    
    return 0;
}
