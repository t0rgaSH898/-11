#include <iostream>
using namespace std;

int main() {
    int number;
    int count = 0;
    
    cin >> number;
    
    if (number == 0) {
        cout << 0 << endl;
        return 0;
    }
    
    if (number < 0) {
        number = -number;
    }
    
    while (number > 0) {
        number = number / 10;  
        count++;               
    }
    
    cout << count << endl;
    
    return 0;
}
