class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() - 1;
        int N = nums.size();
        int startindex = 0;

        while (st <= end) {

            int mid = (st + end) / 2;

            if (nums[mid] <= nums[(mid - 1 + N) % N] &&
                nums[mid] <= nums[(mid + 1) % N]) {
                startindex = mid;
                break;
            }

            else if (nums[mid] <= nums[end])
                end = mid - 1;


            else if (nums[mid] >= nums[st])
                st = mid + 1;

        }

        if (startindex != 0) {

            st = 0;
            end = startindex - 1;

            while (st <= end) {

                int mid = (st + end) / 2;

                if (nums[mid] == target)
                    return mid;
                else if (nums[mid] > target)
                    end = mid - 1;
                else if (nums[mid] < target)
                    st = mid + 1;
            }

            st = startindex;
            end = nums.size() - 1;

            while (st <= end) {

                int mid = (st + end) / 2;

                if (nums[mid] == target)
                    return mid;
                else if (nums[mid] > target)
                    end = mid - 1;
                else if (nums[mid] < target)
                    st = mid + 1;
            }
        }

        else {

            st = 0;
            end = nums.size() - 1;

            while (st <= end) {

                int mid = (st + end) / 2;

                if (nums[mid] == target)
                    return mid;
                else if (nums[mid] > target)
                    end = mid - 1;
                else if (nums[mid] < target)
                    st = mid + 1;
            }
        }
        return -1;
    }
};