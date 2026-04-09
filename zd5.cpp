#include <iostream>
using namespace std;

int main() {
    int N;
    long long factorial = 1; 

    cin >> N;
    
    if (N < 0) {
        return 1;
    }
    
    for (int i = 1; i <= N; i++) {
        factorial *= i;
    }
    
    cout << factorial << endl;
    
    return 0;
}
