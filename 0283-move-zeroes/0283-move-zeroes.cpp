class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int x =-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[++x]=nums[i];
            }
        }
        if(x!=-1){
            for(int i=x+1;i<nums.size();i++){
                nums[i]=0;
            }
        }
        
    }
};