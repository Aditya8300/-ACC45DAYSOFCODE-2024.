#include <iostream>
using namespace std;

int main() {
    // Declare variables for A, B, C, and X
    int A, B, C, X;
    
    // Read the input values
    cin >> A >> B >> C >> X;
    
    // Check if X matches any of A, B, or C
    if (X == A || X == B || X == C) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
