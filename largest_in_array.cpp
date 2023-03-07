class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int larg;
        for(int i=0;i<n;i++){
            if(larg<arr[i]){
                larg=arr[i];
            }
        }
    return larg;
    }
    
};