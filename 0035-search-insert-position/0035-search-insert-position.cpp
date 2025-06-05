class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int st =0;
        int ans=-1;
        int end = nums.size()-1;

        while(st<=end){

            int mid = st + (end-st)/2;

            if(nums[mid]==target)
            return mid;
            else if(nums[mid]<target)
            st = mid+1;
            else{
                ans = mid;
                end = mid-1;
            }
        }
        if(ans==-1 && nums[nums.size()-1]<target)
        return nums.size();
        else
        return ans;
        
    }
};