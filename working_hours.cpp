#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while(T--) {
        int X, Y; // X = hours from Monday to Thursday, Y = hours on Friday
        cin >> X >> Y;
        int total_hours = 4 * X + Y;
        cout << total_hours << endl;
    }
    
    return 0;
}
