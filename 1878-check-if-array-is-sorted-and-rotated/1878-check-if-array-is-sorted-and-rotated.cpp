class Solution {
public:
    bool check(vector<int>& nums) {

        int i=0,j=0,c=0;
        int N = nums.size();

        if(nums[0]>=nums[N-1]){
            for(i=1;i<N;i++){
                if(nums[i]>=nums[i-1]){
                    c++;
                }
                else{
                    break;
                }
            }
            for(j = c+1;j<N-1;j++){
                if(nums[j+1]<nums[j]){
                    break;
                }
            }
            if(j==N-1 || i==N)
            return true;
            else
            return false;
        }
        else{
            for(int i=1;i<N;i++){
                if(nums[i]>=nums[i-1]){
                    c++;
                }
                else{
                    break;
                }
            }
            if(c==N-1)
            return true;
            else
            return false;
        }

        
    }
};