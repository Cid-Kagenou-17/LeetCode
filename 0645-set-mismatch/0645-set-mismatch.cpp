class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int n = nums.size();
        vector <int> vec;

        for(int i=0;i<n;i++){
            while(nums[i]!=i+1){
                if(nums[i]==nums[nums[i]-1])
                break;
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                vec.push_back(nums[i]);
                vec.push_back(i+1);
                break;
            }
        }
        return vec;

    
        
    }
};