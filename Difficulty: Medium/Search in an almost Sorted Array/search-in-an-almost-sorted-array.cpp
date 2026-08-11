class Solution {
  public:
    int findTarget(vector<int>& arr, int target) {
        int n=arr.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[mid]==target){
                return mid;
            }
            if(mid>0&&arr[mid-1]==target){
                return mid-1;
            }
            if(mid+1<n &&arr[mid+1]==target){
                return mid+1;
            }
            else if(arr[mid]>target){
                //moveleft
                e=mid-2; 
            }
            else{
                //move right
                s=mid+2;
            }
        }
        return -1;
        
    }
};
