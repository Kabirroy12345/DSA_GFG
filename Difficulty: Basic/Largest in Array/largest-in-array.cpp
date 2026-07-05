class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int temp=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>temp){
                temp=arr[i];
            }
        }
        return temp;
    }
};
