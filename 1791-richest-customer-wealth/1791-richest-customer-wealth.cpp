class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int maxs =0,s=0;
        for(auto i:accounts){

            s=0;

            for(int j=0;j<i.size();j++){

                s+=i[j];
            }
            if(s>maxs)
            maxs=s;
        }

        return maxs;
        
    }
};