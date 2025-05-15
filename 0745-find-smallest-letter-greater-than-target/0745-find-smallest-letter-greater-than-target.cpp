class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int mid;
        int st =0,end = letters.size()-1;

        while(st<=end){
            mid = end + ((st-end)/2);

            if(letters[mid]>target)
            end = mid-1;
            else if(letters[mid]<target)
            st = mid+1;
            else if(letters[mid]==target)
            st = mid+1;
        }
        if(st<=letters.size()-1 && st==mid)
        return letters[mid];
        else if(st<=letters.size()-1 & st>mid)
        return letters[mid+1];
        else
        return letters[0];
        
    }
};