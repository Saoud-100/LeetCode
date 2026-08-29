class Solution {
public:
    int mySqrt(int x) {
        int left = 0, right = x;

        while(left <= right){
            int mid = left + (right - left)/2;

            if(1LL * mid * mid == x) return mid;
            else if(1LL * mid * mid < x) left = mid + 1;
            else right = mid - 1;
        } 
        return right;
    }
};