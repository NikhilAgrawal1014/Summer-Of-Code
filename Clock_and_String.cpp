#include <iostream>
using namespace std;

// Function to check if two line segments (a, b) and (c, d) intersect on a clock
bool doIntersect(int a, int b, int c, int d) {
    if (a > b) swap(a, b);
    if (c > d) swap(c, d);
    
    // Check if the segments are disjoint
    if ((b < c) || (d < a)) return false;
    
    // Check if one segment completely contains the other
    if ((a <= c && b >= d) || (c <= a && d >= b)) return false;
    
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        if (doIntersect(a, b, c, d)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
