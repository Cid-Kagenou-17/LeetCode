class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int st = 0;
        int end = arr.size()-1;
        int ans;

        while(st<=end){

            int mid = (st + (end-st)/2);

            
            if(mid == arr.size()-1)
            end = mid-1;
            else if(mid==0)
            st = mid+1;
            else if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1]){
                ans = mid;
                break;
            }
            else if(arr[mid]<=arr[mid-1])
            end = mid-1;
            else if(arr[mid]<=arr[mid+1])
            st = mid+1;
        }
        return ans;

        
    }
};