class Solution {
public:
    bool check(vector<int>& nums) {
        int c=0,m=0;
        int i=0,j=0;
        int N = nums.size();
        if(nums[0]>=nums[N-1]){

            for(i=1;i<N;i++){
                if(nums[i]>=nums[i-1])
                    c++;
                else
                    break;
            }

            for(j =c+1;j<N-1;j++){
                if(nums[j]>nums[j+1])
                    break;
            }

            if(i==N || j==N-1)
            return true;
            else
            return false;
        }
        else{
            for(int i=1;i<N;i++){

                if(nums[i]<nums[i-1])
                    return false;
            }
            return true;
        }
        
    }
};