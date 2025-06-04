class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int n = nums.size();
        int ans;

        for(int i=0;i<n;i++){

            while(nums[i]!=i+1){

                swap(nums[i],nums[nums[i]-1]);
                if(nums[i]==nums[nums[i]-1]){
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                ans = nums[i];
                break;
            }
        }
        return ans;


        
    }
};