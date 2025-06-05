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
        int n = mountainArr.length();

      
        int st = 1, end = n - 2, index = -1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            int midVal = mountainArr.get(mid);
            int leftVal = mountainArr.get(mid - 1);
            int rightVal = mountainArr.get(mid + 1);

            if (midVal > leftVal && midVal > rightVal) {
                index = mid;
                break;
            } else if (midVal < rightVal) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        if (index == -1) return -1;

        
        st = 0;
        end = index;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            int val = mountainArr.get(mid);
            if (val == target) return mid;
            else if (val < target) st = mid + 1;
            else end = mid - 1;
        }

     
        st = index + 1;
        end = n - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            int val = mountainArr.get(mid);
            if (val == target) return mid;
            else if (val > target) st = mid + 1;
            else end = mid - 1;
        }

        return -1;
    }
};
