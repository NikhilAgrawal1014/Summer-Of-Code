#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to determine the winner of the game
string determineWinner(int n, const string &s) {
    int upCount = 0;
    for (char c : s) {
        if (c == 'U') upCount++;
    }

    // If the number of facing-up coins is odd, Alice wins; if even, Bob wins
    return (upCount % 2 == 1) ? "YES" : "NO";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        cout << determineWinner(n, s) << endl;
    }

    return 0;
}
