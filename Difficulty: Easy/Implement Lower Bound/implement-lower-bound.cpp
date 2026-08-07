class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int s=0;
        int e=n-1;
        
        int ans=n;  //return the size itself 
        
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[mid]>=target){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};
