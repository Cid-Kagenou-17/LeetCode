/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int length = mountainArr.length();

        int left = 0, right = length - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            int midVal = mountainArr.get(mid);
            int nextVal = mountainArr.get(mid + 1);

            if (midVal < nextVal)
                left = mid + 1;
            else
                right = mid;
        }
        int peak = left;

        
        left = 0;
        right = peak;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int midVal = mountainArr.get(mid);

            if (midVal == target)
                return mid;
            else if (midVal < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        
        left = peak + 1;
        right = length - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int midVal = mountainArr.get(mid);

            if (midVal == target)
                return mid;
            else if (midVal < target)
                right = mid - 1;
            else
                left = mid + 1;
        }

        return -1;
    }
};