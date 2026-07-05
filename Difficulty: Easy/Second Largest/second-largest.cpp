class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n=arr.size();
        int largest=arr[0];
        if(n<2){
            return -1;
        }
        int second_largest=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                second_largest=largest;
                largest=arr[i];
            }
            if(arr[i]<largest && arr[i]>second_largest){
                second_largest=arr[i];
            }
        }
        if(second_largest==INT_MIN){
                return -1;
        }
        return second_largest;
    }
};