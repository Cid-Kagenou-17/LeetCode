class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int st =0,end = arr.size()-1;
        int index = -1;

        while(st<=end){

            int mid = end + (st-end)/2;

            if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1]){
            index = mid;
            break;
            }

            else if(arr[mid-1] >= arr[mid] && arr[mid+1]<=arr[mid])
            end = mid-1;

            else if(arr[mid-1]<=arr[mid] && arr[mid+1]>=arr[mid])
            st = mid+1;
        }
        
        return index;
    }
};