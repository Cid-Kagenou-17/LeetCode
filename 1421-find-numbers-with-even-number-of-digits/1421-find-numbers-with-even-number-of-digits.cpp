class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int c=0;

        for(int i=0;i<nums.size();i++){

            if((int)(log10(nums[i])+1)%2==0)
            c++;

        }

        return c;
        
    }
};