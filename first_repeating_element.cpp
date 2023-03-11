class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        int i=0;
        for(i;i<n;i++){
            for(int j=1;j<n;j++){
                if(arr[i]==arr[j]){
                    return i;
                }
            }
        }
    }
};