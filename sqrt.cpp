class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) {
            return x;
        }
        
        int left = 0, right = x, mid, squared;
        while (left <= right) {
            mid = left + (right - left) / 2;
            squared = mid * mid;
            
            if (squared == x) {
                return mid;
            } else if (squared < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return right;
    }
};
