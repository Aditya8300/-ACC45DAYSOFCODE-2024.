#include <iostream>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;
    
    while (T--) {
        int B1, B2, B3;
        cin >> B1 >> B2 >> B3;
        
        // Count how many bottles are empty (i.e., have a value of 0)
        int emptyCount = 0;
        if (B1 == 0) emptyCount++;
        if (B2 == 0) emptyCount++;
        if (B3 == 0) emptyCount++;
        
        // If two or more bottles are empty, print "Water filling time"
        // Otherwise, print "Not now"
        if (emptyCount >= 2) {
            cout << "Water filling time" << endl;
        } else {
            cout << "Not now" << endl;
        }
    }
    
    return 0;
}