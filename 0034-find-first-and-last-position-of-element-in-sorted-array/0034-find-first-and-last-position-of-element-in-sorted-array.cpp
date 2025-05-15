class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int leftindex = -1,rightindex = -1;
        int st=0,end = nums.size()-1;
        int mid;
        while(st<=end){
            mid = end + ((st-end)/2);

            if(nums[mid]>target)
            end = mid-1;
            else if(nums[mid]<target)
            st = mid+1;
            else if(nums[mid]==target){
                leftindex = mid;
                end = mid-1;
            }
        }
        st =0,end =nums.size()-1;
        while(st<=end){
            mid = end + ((st-end)/2);

            if(nums[mid]>target)
            end = mid-1;
            else if(nums[mid]<target)
            st = mid+1;
            else if(nums[mid]==target){
                rightindex = mid;
                st = mid+1;
            }
        }
        return {leftindex, rightindex};

    }
};