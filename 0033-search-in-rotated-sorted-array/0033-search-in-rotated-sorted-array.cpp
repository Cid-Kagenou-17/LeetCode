class Solution {
public:
    int search(vector<int>& arr, int target) {
        
        int ans;
        int st=0;
        int N = arr.size();
        int end = N-1;
        if(arr[0]<=arr[N-1]){
            ans =  0;
        }
        else{
        
        while(st<=end){
            
            int mid = (st + (end-st)/2);
            
            if(arr[mid]<=arr[(mid-1+N)%N] && arr[mid]<=arr[(mid+1+N)%N]){
            ans =  mid;
            break;}
            else if(arr[mid]>=arr[0])
            st = mid+1;
            else
            end = mid-1;
        }
        }
        st = 0;
        end = ans-1;
        while(st<=end){

            int mid = (st + (end-st)/2);

            if(arr[mid]==target)
            return mid;
            else if(arr[mid]<=target)
            st = mid+1;
            else if(arr[mid]>=target)
            end = mid-1;
        }

        st = ans;
        end = N-1;
        while(st<=end){

            int mid = (st + (end-st)/2);

            if(arr[mid]==target)
            return mid;
            else if(arr[mid]<=target)
            st = mid+1;
            else if(arr[mid]>=target)
            end = mid-1;
        }
        return -1;

        
    }
};