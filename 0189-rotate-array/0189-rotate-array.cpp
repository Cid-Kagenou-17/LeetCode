class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int N = nums.size();
        int m=0;
        pair <int,int> p_array[N];

        for(int i=0;i<N;i++){
            p_array[i] = make_pair(i,nums[i]);
        }

        for(auto &i:p_array){
        	int z = ((m+1+k+N)%N)-1;
        	if(z<0)
        		z = N-1;
            i.first = z;
            m++;
        }

        for(auto i:p_array){
            nums[i.first] = i.second;
        }
        
    }
};