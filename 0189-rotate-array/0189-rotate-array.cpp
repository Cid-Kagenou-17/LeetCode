class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int N = nums.size();
        pair <int,int> p_array[N];

        for(int i=0;i<N;i++){

            p_array[i].first = (i+k)%N;
            p_array[i].second = nums[i];

        }
 
        for(int i=0;i<N;i++){
            nums[p_array[i].first] = p_array[i].second;
        }

        

        
    }
};