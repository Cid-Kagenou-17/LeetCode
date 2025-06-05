class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int st = 0;
        int end = arr.size()-1;
        int firstoccurence = -1;
        int lastoccurence = -1;
        
        while(st<=end){
            
            int mid = (st + (end-st)/2);
            if(arr[mid]==target){
                firstoccurence = mid;
                end = mid-1;
            }
            else if(arr[mid]>target){
                end = mid-1;
            }
            else if(arr[mid]<target){
                st = mid+1;
            }
        }
        
        st = 0;
        end= arr.size()-1;
        
        while(st<=end){
            
            int mid = (st + (end-st)/2);
            if(arr[mid]==target){
                lastoccurence = mid;
                st = mid+1;
            }
            else if(arr[mid]>target){
                end = mid-1;
            }
            else if(arr[mid]<target){
                st = mid+1;
            }
        }

        return {firstoccurence,lastoccurence};


        
    }
};