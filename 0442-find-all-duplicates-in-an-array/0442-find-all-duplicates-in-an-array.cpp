class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        int n = nums.size();
        set <int> s;
        vector <int> ans;

        for(int i=0;i<n;i++){

            while(nums[i]!=i+1){

                if(nums[i]==nums[nums[i]-1])
                break;
                swap(nums[i],nums[nums[i]-1]);
                
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                s.emplace(nums[i]);
            }
        }
        for(auto i:s){
            ans.push_back(i);
        }

        return ans;

        
    }
};