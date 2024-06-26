#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to convert a decimal number to its ternary representation
vector<int> toTernary(int n) {
    if (n == 0) return {0};
    vector<int> ternary;
    while (n > 0) {
        ternary.push_back(n % 3);
        n /= 3;
    }
    reverse(ternary.begin(), ternary.end());
    return ternary;
}

// Function to find the number b such that a tor b = c
int findB(int a, int c) {
    vector<int> ta = toTernary(a);
    vector<int> tc = toTernary(c);

    // Pad the shorter ternary representation with leading zeros
    while (ta.size() < tc.size()) ta.insert(ta.begin(), 0);
    while (tc.size() < ta.size()) tc.insert(tc.begin(), 0);

    vector<int> tb(tc.size());
    for (size_t i = 0; i < tc.size(); ++i) {
        tb[i] = (tc[i] - ta[i] + 3) % 3; // Calculate b's ternary digit
    }

    // Convert ternary representation of b back to decimal
    int b = 0;
    for (int digit : tb) {
        b = b * 3 + digit;
    }
    return b;
}

int main() {
    int a, c;
    cin >> a >> c;
    cout << findB(a, c) << endl;
    return 0;
}
