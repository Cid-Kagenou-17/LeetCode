class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        int c=0,ans;
        for(int i=0;i<n+1;i++){

            c=0;
            for(int j=0;j<n;j++){

                if(nums[j]==i){

                    c++;
                    break;
                }
            }
            if(c==0)
            ans =  i;
        }

        return ans;
        
    }
};