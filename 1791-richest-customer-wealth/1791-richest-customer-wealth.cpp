class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int summ=0,maxsumm=0;
        for(auto i:accounts){
            summ=0;
            for(int j=0;j<i.size();j++){
                summ+=i[j];
            }
            if(summ>maxsumm)
            maxsumm = summ;

        }
        return maxsumm;
        
    }
};