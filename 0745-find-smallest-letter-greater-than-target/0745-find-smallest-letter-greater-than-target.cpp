class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char p = letters[0];
        int st = 0;
        int end = letters.size()-1;

        while(st<=end){

            int mid = (st + (end-st)/2);

            if(letters[mid]>target){
                p = letters[mid];
                end = mid-1;
            }

            else if(letters[mid]<=target){
                st = mid+1;
            }
        }
        return p;
        
    }
};