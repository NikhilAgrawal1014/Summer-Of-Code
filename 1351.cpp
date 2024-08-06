#include <vector>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        int row = m - 1;
        int col = 0;
        
        while (row >= 0 && col < n) {
            if (grid[row][col] < 0) {
                // All elements in the current row from this point are negative
                count += (n - col);
                // Move up to the previous row
                row--;
            } else {
                // Move to the next column
                col++;
            }
        }
        return count;
    }
};
