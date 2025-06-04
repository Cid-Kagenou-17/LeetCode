class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        int ans;

        for(int i=0;i<n;i++){

            while(nums[i]!=i){
                if(nums[i]>n-1){
                    break;
                }
                else{
                    swap(nums[i],nums[nums[i]]);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i){
                ans = i;
                break;
            }
        }
        return ans;
    }
};