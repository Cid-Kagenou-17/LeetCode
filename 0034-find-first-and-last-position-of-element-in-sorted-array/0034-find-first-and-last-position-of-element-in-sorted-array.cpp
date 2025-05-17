class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int startindex = -1,endindex = -1;
        int st=0,end = nums.size()-1;

        while(st<=end){

            int mid = (st+end)/2;

            if(nums[mid]==target){
                startindex = mid;
                end = mid-1;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }

            else if(nums[mid]<target)
            st = mid+1;
        }
        st =0;
        end = nums.size()-1;

        while(st<=end){

            int mid = (st+end)/2;

            if(nums[mid]==target){
                endindex = mid;
                st = mid+1;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }

            else if(nums[mid]<target)
            st = mid+1;

        }

        return {startindex, endindex};
        
    }
};